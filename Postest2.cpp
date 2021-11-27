/*
Nama : Fathimah Abiyyi Khairunnisa
NPM  : 2117051088
Kelas: B
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//variable
	float Jumlah_Bitcoin, Harga_Beli, Harga_Sekarang;
	
	//title
	cout << "--------------Besaran Harga Bitcoin--------------" << endl;
	cout << endl;
	
	//input
	cout << "Masukan Jumlah Pembelian Bitcoin\t: "; cin >> Jumlah_Bitcoin;
	cout << "Masukan Harga Pembelian Bitcoin\t: "; cin >> Harga_Beli;
	cout << "Masukan Harga Bitcoin Saat Ini\t: "; cin >> Harga_Sekarang;
	
	//space
	cout << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;
	
	//output
	cout << "Kenaikan/Penurunan\t: " << ((Harga_Sekarang-Harga_Beli)/Harga_Beli)*100 << "%" << endl;
	cout << "Keuntungan/Kerugian\t: " << ((Harga_Sekarang-Harga_Beli)*Jumlah_Bitcoin)/1000000 << " juta" << endl;
	
  getch();
	
}
