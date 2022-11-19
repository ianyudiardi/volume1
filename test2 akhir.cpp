#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float panjang, lebar, r, alas, tinggip, tinggil, tinggis, t;
	float const pi=3.14;
	int bangun, ruang;
	char ulang;
	
	do{
		cout<<"Selamat datang di aplikasi hitung"<<endl;
		cout<<"Silahkan pilih bentuk dasar"<<endl;
		cout<<"[1] Persegi"<<endl;
		cout<<"[2] Lingkaran"<<endl;
		cout<<"[3] Segitiga"<<endl;
		cin>>bangun;
		
		switch (bangun){
			case 1:
				cout<<"Silakan pilih bangun ruang"<<endl;
				cout<<"[1] Kubus"<<endl;
				cout<<"[2] Balok"<<endl;
				cout<<"[3] Tidak memilih"<<endl;
				cin>>ruang;
				
				if(ruang==1){
					cout<<"Masukkan panjang ";
					cin>>panjang;
					cout<<"Kubus memiliki volume "<<panjang*panjang*panjang<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if(ruang==2){
					cout<<"Masukkan panjang ";
					cin>>panjang;
					cout<<"Masukkan lebar ";
					cin>>lebar;
					cout<<"Masukkan tinggi ";
					cin>>tinggip;
					cout<<"Balok memiliki volume "<<panjang*lebar*tinggip<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if (ruang==3){
					cout<<"Masukkan panjang ";
					cin>>panjang;
					cout<<"Masukkan lebar ";
					cin>>lebar;
					cout<<"Persegi (panjang) memiliki luas "<<panjang*lebar<<" dan keliling "<<2*panjang+2*lebar<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else {
					cout<<"ERROR"<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				break;
			case 2:
				cout<<"Silahkan pilih bangun ruang"<<endl;
				cout<<"[1] Bola"<<endl;
				cout<<"[2] Tabung"<<endl;
				cout<<"[3] Tidak memilih"<<endl;
				cin>>ruang;

				if(ruang==1){
					cout<<"Masukkan jari-jari ";
					cin>>r;
					cout<<"Bola memiliki volume: "<<4/3*pi*r*r*r<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if(ruang==2){
					cout<<"Masukkan jari-jari ";
					cin>>r;
					cout<<"Masukkan tinggi ";
					cin>>tinggil;
					cout<<"Tabung memiliki volume: "<<pi*r*r*tinggil<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if(ruang==3){
					cout<<"Masukkan jari-jari"<<endl;
					cin>>r;
					cout<<"Lingkaran memiliki luas: "<<pi*r*r<<" dan keliling: "<<pi*2*r<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else {
					cout<<"ERROR"<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				break;
			case 3:
				cout<<"Silahkan pilih bangun ruang:"<<endl;
				cout<<"[1] Prisma segitiga"<<endl;
				cout<<"[2] Limas segitiga"<<endl;
				cout<<"[3] Tidak memilih"<<endl;
				cin>>ruang;
				
				if(ruang==1){
					cout<<"Masukkan alas: ";
					cin>>alas;
					cout<<"Masukkan tinggi segitiga: ";
					cin>>tinggis;
					cout<<"Masukkan tinggi prisma: ";
					cin>>t;
					cout<<"Prisma memiliki volume: "<<(alas*tinggis*t)/2<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if(ruang==2){
					cout<<"Masukkan alas: ";
					cin>>alas;
					cout<<"Masukkan tinggi segitiga: ";
					cin>>tinggis;
					cout<<"Masukkan tinggi limas: ";
					cin>>t;
					cout<<"Limas memiliki luas: "<<alas*tinggis*t/2/3<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else if(ruang==3){
					cout<<"Masukkan alas: ";
					cin>>alas;
					cout<<"Masukkan tinggi segitiga: ";
					cin>>tinggis;
					cout<<"Segitiga memiliki luas: "<<alas*tinggis<<" dan keliling "<<sqrt((alas*alas)+(tinggis*tinggis))+alas+tinggis<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				else {
					cout<<"ERROR"<<endl;
					cout<<"Ulangi? (y/n)"<<endl;
					cin>>ulang;
					system("cls");
				}
				break;
			default:
				cout<<"ERROR"<<endl;
				cout<<"Ulangi? (y/n)"<<endl;
				cin>>ulang;
				system("cls");
		}	
	}while(ulang=='y');
	
	cout<<"Program end"<<endl;
	return 0;
}
