using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace DeviceInterfaces
{

    [Guid("2A829A21-D42A-4104-990D-706F4F21DB86")]
    [ComVisible(true)]
    [ClassInterface(ClassInterfaceType.None)]
    [Description("模拟事务记录")]
    public class SimTransaction : ITransaction
    {
        public void Connect(string connectString)
        {
        }

        public void Disconnect()
        {

        }

        public string GetVersion()
        {
            return "1.0";
        }

        public string add(int a, int b)
        {
            return string.Concat(a, "+", b, "=", a + b);
        }

        public string multi(int a, int b)
        {
            return string.Concat(a, "*", b, "=", a * b);
        }
    }
}
