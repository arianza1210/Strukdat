#include "queue.h"
#include "team.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
	car call;
	string element;
	int pilih, n, tambah;
	int batas;
	team();
	cout<<"============================================================================"<<endl;
	cout<<"================= Program Antrian Drive Thru pada KaEfCi ==================="<<endl;
	cout<<"============================================================================"<<endl;
	cout<<"(case sensitif nih harap pengetikannya jangan salah ya salam manis dari aku)\n"<<endl;
	cout<<"kapasitas antrian  : ";
	cin>>batas;
	call.batas(batas);
	do {
		cout<<"\n1.Mobil Masuk";
		cout<<"\n2.Mobil Keluar";
		cout<<"\n3.jumlah antrian";
		cout<<"\nMasukkan pilihan :";
		cin>>pilih;
		switch(pilih) {
			case(1):
				cout<<"\nMasukkin nama atau plat Mobilnya :  ";
				cin>>element;
				call.enqueue(element);
				cout<<"--------------------------------"<<endl;
				call.tampil();
				break;
			case(2):
				call.dequeue();
				cout<<"--------------------------------"<<endl;
				call.tampil();
				break;
			case(3):
				call.tampil();
				break;
		}
		cout<<"\n\nIngin masukin mobil atau keluarin mobil hayoo ?\n";
		cout<<"mau masukin mobil lagi (tekan 1), kalau tidak exit (tekan apa saja ya :v)\n";
		cin>>tambah;
		system("cls");
	} while(tambah==1);
	cout<<"\n-------------------------------------------------------"<<endl;
	cout<<"Jadi mobil yang masih ngantrii yakni : ";
	call.tampil();
	cout<<"--------------------------------------------------------"<<endl;
}
