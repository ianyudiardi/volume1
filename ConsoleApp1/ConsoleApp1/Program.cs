// See https://aka.ms/new-console-template for more information

using ConsoleApp1;
using new1;
using System.ComponentModel.DataAnnotations;
using System.Transactions;

var tran1 = new transactions();
tran1.nota = "4202306140001";
tran1.tanggal = DateTime.Now;
tran1.total = 5500000;

var tran2 = new transactions();
tran1.nota = "4202306140002";
tran1.tanggal = DateTime.Now;
tran1.total = 7250000;

var cod1 = new cashondelivery();
cod1.nota = "5202306140003";
cod1.tanggal = DateTime.Now;
cod1.total = 9000000;
cod1.kurir = "ian";

var trans = new transactions[3];
trans[0] = tran1;
trans[1] = tran2;
trans[2] = cod1;


Console.WriteLine("Laporan Keuangan");
for(int i = 0; i < trans.Length; i++)
{
    Console.WriteLine("----------------");
    Console.WriteLine("Nota     :" + trans[i].nota);
    Console.WriteLine("Tanggal  :" + trans[i].tanggal);
    Console.WriteLine("Total    :" + trans[i].total);
    if (trans[i] is cashondelivery cod)
    {
        Console.WriteLine("kurir: ", cod.kurir);
    }
}
trans[0].payment(7000000);
trans[1].payment(7000000);
Console.ReadKey();