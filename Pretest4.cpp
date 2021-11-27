/*
	Nama : Fathimah Abiyyi Khairunnisa
	NPM  : 2117051088
	Kelas: B
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	//variable
	float angka, banyak_bilangan, total, rata_rata;
	
	//title
	cout << "----------------------------------------------------" << endl;
	cout << "\t Menghitung Total dan Rata-Rata" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << endl;
	
	//input (Menginput banyaknya bilangan)
	cout << "Masukan Banyaknya Bilangan\t: "; cin >> banyak_bilangan;
	cout << endl;
	
	//input (Mentotalkan angka yang dimasukkan)
	for (int x = 1; x <= banyak_bilangan; x++) {
		cout << "Masukan Angka\t\t\t: "; cin >> angka;
		total = total + angka;
	}
	
	//space
	cout << endl;
	cout << "----------------------------------------------------" << endl;
	cout << endl;
	
	//output
	cout << "Total Penjumlahan\t\t: " << total << endl;
	rata_rata = total / banyak_bilangan;
	cout << "Rata-Rata\t\t\t: " << rata_rata << endl;
	
	getch();

}
