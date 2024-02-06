using new1;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class cashondelivery : transactions
    {
        public string kurir { get; set; }
        public void payment(double bayar)
        {
            var kembalian = total - bayar;
            Console.WriteLine();
            Console.WriteLine("Pembayaran untuk nota " + nota);
            if (kembalian > 0)
            {
                Console.WriteLine("Pembayaran Kurang");
            }
            else
            {
                Console.WriteLine("Pembayaran Tunai");
                Console.WriteLine("------------------");
                Console.WriteLine("Total: " + total);
                Console.WriteLine("Bayar: " + bayar);
                Console.WriteLine("Kembali: " + kembalian);
            }
        } 
    }
}
