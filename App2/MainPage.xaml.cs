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
        public static Windows.UI.Color BLUE_COLOR = Windows.UI.Color.FromArgb(255, 0, 255, 0);
        public MainPage()
        {
            this.InitializeComponent();
        }


        private void Button_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                string hexInput = ISFText.Text;
                DisplayRecord(hexInput);
            }
            catch (Exception ex)
            {
                ErrorDisplay.ShowErrorMessage(ex.Message);
            }
        }

        private async void DisplayRecord(string hexInput)
        {
            try
            {
                InMemoryRandomAccessStream stream = new InMemoryRandomAccessStream();
                using (DataWriter writer = new DataWriter(stream.GetOutputStreamAt(0)))
                {
                    writer.WriteBytes(HexStringToByteArray(hexInput));
                    await writer.StoreAsync();
                    var iSC = new InkStrokeContainer();

                    await SampleInkCanvas.InkPresenter.StrokeContainer.LoadAsync(stream);

                    SampleInkCanvas.Width = SampleInkCanvas.InkPresenter.StrokeContainer.BoundingRect.Right;
                    SampleInkCanvas.Height = SampleInkCanvas.InkPresenter.StrokeContainer.BoundingRect.Bottom;

                    StrokeTextBlock.Text = "Number of Strokes: " + SampleInkCanvas.InkPresenter.StrokeContainer.GetStrokes().Count.ToString();
                }
                stream.Dispose();
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
