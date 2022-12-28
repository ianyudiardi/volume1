#include <iostream>
using namespace std;

int x, i, j;
char repeat;
string lib[100], cari;

int main(){
	cout<<"Aplikasi Log buku"<<endl;
	cout<<"Silahkan Input Buku"<<endl;
	i=0;
	x=1;
	do{
		cout<<"Nama buku: ";
		cin>>lib[i];
		cout<<"Input Lagi? (y/n)"<<endl;
		cin>>repeat;
		i++;
		x++;
	}
	while(repeat=='y'||repeat=='Y');
	system("cls");
	
	cout<<"Daftar Buku:"<<endl;
	for(i=0; i<x; i++){
		cout<<lib[i]<<endl;
	}
	
	cout<<"Silahkan input buku yang dicari: "<<endl;
	cin>>cari;
	for(i=0; i<x; i++){
		if(cari==lib[i]){
			cout<<"Buku yang anda cari ada pada indeks ke -"<<i+1<<endl;
		}
	}
}
