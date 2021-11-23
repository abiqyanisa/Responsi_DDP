#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	//data
	int Tanggal;
	string Bulan;
	int Tahun;
	float Rupiah;
	float Bitcoin;
	
	//title
	cout << "------Kalkulator Konversi Rupiah ke Bitcoin------" << endl;
	cout << endl;
	
	//input
	cout << "Tanggal Transaksi\t: "; cin >> Tanggal;
	cout << "Bulan Transaksi\t\t: "; cin >> Bulan;
	cout << "Tahun Transaksi\t\t: "; cin >> Tahun;
	cout << "Jumlah Uang dalam Rupiah: "; cin >> Rupiah;
	cout << "Harga per Bitcoin\t: "; cin >> Bitcoin;
	
	//space
	cout << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;
	
	//output
	cout << "Tanggal Transaksi\t: " << Tanggal << " " << Bulan << " " << Tahun << endl;
	cout << "Jumlah Bitcoin\t\t: " << Rupiah/Bitcoin << " " << "Bitcoin" << endl;
	
	getch();
}
