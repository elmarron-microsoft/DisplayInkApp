using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using DisplayInkApp.Models;
using Windows.Storage.Streams;
using Windows.UI.Input.Inking;
using Csv;
using Windows.Storage;
using System.Threading.Tasks;

namespace DisplayInkApp
{
    class CSVAugmentor
    {

        public static async void AugmentCSV(string[] headers)
        {
            // load csv
            List<InkSample> records = await ReadInCSVData();
            // parse hex and add strokes to model
            AddStrokeCountToRecords(records);
            // save model to diff csv
            WriteToCSV(records, headers);
        }

        private static async Task<List<InkSample>> ReadInCSVData()
        {
            List<InkSample> records = new List<InkSample>();
            StorageFolder appFolder = Windows.ApplicationModel.Package.Current.InstalledLocation;

            StorageFolder assetsFolder = await StorageFolder.GetFolderFromPathAsync(
                Windows.ApplicationModel.Package.Current.InstalledLocation.Path +
                @"\Assets");

            Windows.Storage.StorageFile sampleFile =
                await assetsFolder.GetFileAsync("RandomEnglishInkSamples_2018_07_01.csv");

            var stream = await sampleFile.OpenStreamForReadAsync();
            using (TextReader fileReader = new StreamReader(stream))
            {
                List<ICsvLine> rows = CsvReader.Read(fileReader).ToList();

                foreach (var row in rows)
                {
                    if (row.ColumnCount < 3)
                    {
                        continue;
                    }
                    records.Add(new InkSample(row[0], row[1], row[2]));
                }
                return records;
            }
        }


        private static List<InkSample> ReadInCSVData(string absolutePath)
        {
            List<InkSample> records = new List<InkSample>();
            if (!File.Exists(absolutePath))
            {
                Console.Write("BAD PATH");
            }
            using (TextReader fileReader = File.OpenText(absolutePath))
            {
                List<ICsvLine> rows = CsvReader.Read(fileReader).ToList();

                foreach (var row in rows)
                {
                    records.Add(new InkSample(row[0], row[1], row[2]));
                }
                return records;
            }
        }

        private static async void AddStrokeCountToRecords(List<InkSample> records)
        {
            foreach (InkSample record in records)
            {
                string hexInput = record.ISF;
                try
                {
                    InMemoryRandomAccessStream stream = new InMemoryRandomAccessStream();
                    using (DataWriter writer = new DataWriter(stream.GetOutputStreamAt(0)))
                    {
                        writer.WriteBytes(HexStringToByteArray(hexInput));
                        await writer.StoreAsync();
                        var iSC = new InkStrokeContainer();

                        await iSC.LoadAsync(stream);


                        record.StrokeCount = iSC.GetStrokes().Count;
                    }
                    stream.Dispose();
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Error parsing ISF!");
                }
            }

        }

        private static byte[] HexStringToByteArray(String hex)
        {
            int NumberBytes = (hex.Length - 2) / 2;
            byte[] bytes = new byte[NumberBytes];

            using (var sr = new StringReader(hex))
            {
                // read first 2 bytes ("0x")
                for (int i = 0; i < 2; i++)
                {
                    sr.Read();
                }

                // Read hex characters
                for (int i = 0; i < NumberBytes; i++)
                {
                    bytes[i] =
                        Convert.ToByte(new string(new char[2] { (char)sr.Read(), (char)sr.Read() }), 16);
                }
            }

            return bytes;
        }

        private static async void WriteToCSV(List<InkSample> records, string[] headers)
        {
            StorageFolder appFolder = Windows.ApplicationModel.Package.Current.InstalledLocation;

            StorageFolder assetsFolder = await StorageFolder.GetFolderFromPathAsync(
                Windows.ApplicationModel.Package.Current.InstalledLocation.Path +
                @"\Assets");

            StorageFile sampleFile = await DownloadsFolder.CreateFileAsync("AugRandomEnglishInkSamples_RSlargeSet_proportion.csv");

            var stream = await sampleFile.OpenStreamForWriteAsync();
            using (TextWriter fileWriter = new StreamWriter(stream))
            {
                List<string[]> stringedRecords = new List<string[]>();

                foreach (var record in records)
                {
                    stringedRecords.Add(new string[] { record.GUID, record.Reco, record.RecoLength.ToString(), record.StrokeCount.ToString(), (record.StrokeCount/(record.RecoLength + 0.0)).ToString()});
                }

                CsvWriter.Write(fileWriter, headers, stringedRecords);
            }
        }
    }
}
