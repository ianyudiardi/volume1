using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace new1;
public class transactions
{
    public string nota { get; set; }
    public DateTime tanggal { get; set; }
    public double total { get; set; }

    public void payment(double bayar)
    {
        var kembalian = total - bayar;
        Console.WriteLine();
        Console.WriteLine("Pembayaran" + nota);
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
    public void payment(string card, double bayar)
    {
        Console.WriteLine();
        Console.WriteLine("Pembayaran" + nota);
        if (card.Length < 14 || card.Length > 14)
        {
            Console.WriteLine("Kartu tidak valid");
        }
        else
        {
            Console.WriteLine("Pembayaran Debit");
            Console.WriteLine("S------------------");
            Console.WriteLine("No.  " + card);
            Console.WriteLine("Total: " + total);
            Console.WriteLine("Bayar: " + bayar);
        }
    }
}
