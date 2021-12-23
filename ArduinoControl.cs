using System;
using System.IO.Ports;

namespace ArduinoControl_Lytro
{
    class Program
    {
        static void Main(string[] args)
        {
            SerialPort port;
            //open the port to connect the arduino
            port = new SerialPort("COM3", 57600);
            try
            {
                port.Open();
            }
            catch(Exception ex)
            {
                Console.WriteLine("Can not Connect to with the arduino");
            }

            while(true)
            {
                Console.WriteLine("Please enter the capture mode (a:1, b:3, c:5)");
                string ms = Console.ReadLine();
                if (ms == "q")
                {
                    break;
                }
                port.Write(ms);
                Console.WriteLine("Capture done.....");
            }
        }
    }
}
