using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.UI.Popups;

namespace DisplayInkApp
{
    class ErrorDisplay
    {

        public static async void ShowErrorMessage(string err)
        {
            // Create the message dialog and set its content
            var messageDialog = new MessageDialog("An error occured: " + err);

            // Add commands and set their callbacks; both buttons use the same callback function instead of inline event handlers;
            messageDialog.Commands.Add(new UICommand(
                "Okay"));

            // Set the command that will be invoked by default
            messageDialog.DefaultCommandIndex = 0;

            // Set the command to be invoked when escape is pressed
            messageDialog.CancelCommandIndex = 0;

            // Show the message dialog
            await messageDialog.ShowAsync();
        }
    }
}
