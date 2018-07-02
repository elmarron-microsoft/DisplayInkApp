using System;
using Windows.System;
using System.Collections.Generic;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.Storage.Streams;
using Windows.UI.Input.Inking;
using Windows.UI.Popups;
using System.Threading.Tasks;
using System.Linq;
using System.IO;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace DisplayInkApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {

        static int INK_SAMPLE_INDEX = 0;

        public MainPage()
        {
            this.InitializeComponent();
        }


        private void Button_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                if (INK_SAMPLE_INDEX != InkSamples.INK_SAMPLE_ARRAY.Length - 1)
                {
                    INK_SAMPLE_INDEX += 1;
                }
                DisplayRecord(INK_SAMPLE_INDEX);
            }
            catch (Exception ex)
            {
                ErrorDisplay.ShowErrorMessage(ex.Message);
            }
        }

        private async void DisplayRecord(int idx)
        {
            try
            {
                String InkIsf = InkSamples.INK_SAMPLE_ARRAY[idx];
                InMemoryRandomAccessStream stream = new InMemoryRandomAccessStream();


                using (DataWriter writer = new DataWriter(stream.GetOutputStreamAt(0)))
                {
                    writer.WriteBytes(HexStringToByteArray(InkIsf));
                    await writer.StoreAsync();
                    var inkStrokeContainer = new InkStrokeContainer();
                }

                try
                {
                    await InkCanvas.InkPresenter.StrokeContainer.LoadAsync(stream);

                }
                catch (Exception ex)
                {
                    ErrorDisplay.ShowErrorMessage(ex.Message);
                }
            }
            catch (Exception ex)
            {
                ErrorDisplay.ShowErrorMessage(ex.Message);
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

    }
}
