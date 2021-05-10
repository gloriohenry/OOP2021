#include <iostream>
#define BUNGA 0,01

using namespace std;

int main()
{
	const char nama[]="\nNama : Henry Glorio Tampemawa";
	char nim[]="\nNim :105011810213";

	int kode,kode2,setor,saldo;
	char lagi;
	string pass;
	int tarik[2]={500000,100000};
	



cout<<"\n\tBIODATA"<<endl;
cout<<"+++++++++++++++++++++++++++"<<endl;
cout<<nama<<endl;
cout<<nim<<endl;
cout<<endl;

do{
	
	
	cout<<"\n\t\t\t\tLOGIN";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\nMasukan Kata Sandi : ";
	cin>>pass;
	system("cls");
	
	while(pass== " 123456 ");
	{
		
		if(lagi=='T'||lagi=='t')
		goto keluar;
		
		
		
		
cout<<"\n 					ATM BANK"<<endl;
cout<<"\n=============================================="<<endl;
cout<<""<<endl;
cout<<"						MENU"<<endl;
cout<<" "<<endl;
cout<<"\n1.cek saldo 				3.Setoran Tunai"<<endl;
cout<<endl;
cout<<"\n2.Penarikan Tunai			4.Exit"<<endl;
cout<<"\n-------------------------------------------"<<endl;
cout<<endl;
cout<<"\nMASUKAN PILIHAN ANDA : ";
cin>>kode;
system("cls");

switch(kode)

	{
		case 1:
			cout<<endl;
			cout<<"\n____________________________"<<endl;
			cout<<"\n|	Informasi Saldo            |"<<endl;
			cout<<"\n|"<<endl;
			cout<<"Sisa saldo: Rp "<<saldo<<endl;
			cout<<"\n|____________________________|"<<endl;
			cout<<"\nAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI? Y/T ; ";
			cin>>lagi;
			system("cls");
			break;
			
		case 2:
			cout<<"\n 				ATM BANK"<<endl;
			cout<<"\n======================================"<<endl;
			cout<<""<<endl;
			cout<<"\n____________________________________________"<<endl;
			cout<<"\n				PENARIKAN TUNAI"<<endl;
			cout<<" "<<endl;
			cout<<"\n1. Rp 500.000		2. Rp 1.000.000"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\n____________________________________"<<endl;
			cout<<endl;
			cout<<"\nMASUKAN PILIHAN ANDA : ";
			cin>>kode2;
			system("cls");
			
			switch(kode2)
					{
						case 2:
							cout<<"\t\t\nPenarikan Berhasil";
							cout<<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\nAnda melakukan penarikan tunai senilai : Rp 500.000, -"<<endl;
							saldo=saldo-tarik[0];
							cout<<""<<endl;
							cout<<"\nSisa saldo : Rp "<<saldo<<",-";
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"\nAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI? Y/T ; ";
							cin>>lagi;
							system("cls");
						break;
						
							default:
								cout<<"\nKODE YANG ANDA MASUKAN TIDAK TERSEDIA";
								system("cls");
					}
					break;
					
					case 3:
						cout<<"\nSetoran Tunai"<<endl;
						cout<<endl;
						cout<<endl;
						cout<<endl;
						cout<<"\nMasukan Jumlah yang anda ingin setorkan : ";
						cin>>setor;
						saldo=setor*BUNGA+setor+saldo;
						cout<<endl;
						cout<<"\nJumlah Saldo Anda Sekarang :"<<saldo<<endl;
						cout<<"\nApakah ingin melakukan transaksi lagi? Y/T ; ";
						cin>>lagi;
						system("cls");
						break;
						
					case 4:
						goto keluar;
						break;
						
						default:
							cout<<"\nKode yang anda masukan tidak tersedia";
							system("cls");
	}
	}
cout <<endl;
system("cls");



	} while(lagi=='Y'||lagi=='y');
	keluar:
	cout<<"\nTerima kasih telah melakukan transaksi";
	cout<<endl;
	
	
	return 0;
}
