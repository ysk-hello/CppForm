using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace TestLib
{
    public class Device
    {
        public Device(string name)
        {
            Name = name;
        }

        public string Name { get; set; }

        public string Description { get; set; }

        public int Price { get; set; }
    }
}
