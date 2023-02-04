using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace AppProps
{
    public class User
    {
        private int uId;
        private string uName;
        private string uPass;
        private int uAccessLevel;
        private int uActiveStatus;

        public int Id { get => uId; set => uId = value; }
        public string Name { get => uName; set => uName = value; }
        public string Pass { get => uPass; set => uPass = value; }
        public int AccessLevel { get => uAccessLevel; set => uAccessLevel=value; }
        public int ActiveStatus { get => uActiveStatus; set => uActiveStatus=value; }
    }
}
