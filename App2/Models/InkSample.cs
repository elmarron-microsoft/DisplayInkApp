using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DisplayInkApp.Models
{
    class InkSample
    {

        public string GUID { get; set; }
        public string Reco { get; set; }
        public int RecoLength { get; set; }
        public string ISF { get; set; }
        public int StrokeCount { get; set; }

        public InkSample(string guid, string reco, string isf)
        {
            this.GUID = guid;
            this.Reco = reco;
            this.RecoLength = reco.Length;
            this.ISF = isf;
        }
    }
}
