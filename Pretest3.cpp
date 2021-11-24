/*
Nama : Fathimah Abiyyi Khairunnisa
NPM  : 2117051088
Kelas: B
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//data
	int Gaji, UMR;
	
	//title
	cout << "------------Perhitungan Gaji berdasarkan UMR------------" << endl;
	cout << endl;
	
	//input
	cout << "Masukan Besaran Gaji\t: "; cin >> Gaji;
	cout << "Masukan Besaran UMR\t: "; cin >> UMR;
	
	//space
	cout << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	
	//output
	if (Gaji > UMR){
		cout << "Gaji Anda Diatas UMR" << endl;
	}
	
	else if (Gaji == UMR){
		cout << "Gaji Anda Setara dengan UMR" << endl;
	}
	
	else {
		cout << "Gaji Anda Dibawah UMR" << endl;
	}
	
	getch();
}
