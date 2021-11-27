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
	string NPM, tanggal_lahir, bulan_lahir, tahun_lahir;
	
	//input
	cout << "NPM\t\t: "; cin >> NPM;
	cout << "Tanggal Lahir\t: "; cin >> tanggal_lahir;
	cout << "Bulan Lahir\t: "; cin >> bulan_lahir;
	cout << "Tahun Lahir\t: "; cin >> tahun_lahir;
	
	//space
	cout << endl;
	cout << "--------------------------------" << endl;
	cout << endl;
	
	//output
	cout << "username\t: " << NPM << endl;
	cout << "password\t: " << tahun_lahir << bulan_lahir << tanggal_lahir << endl;
	
	getch();

}
