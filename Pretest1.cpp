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
	string nama;
	string alamat;
	string email;
	string telepon;
	
	//input
	cout<<"Nama		    : ";
	getline(cin,nama);
	cout<<"Alamat		  : ";
	getline(cin,alamat);
	cout<<"Email		  : ";
	getline(cin,email);
	cout<<"No telepon	: ";
	getline(cin,telepon);
	cout<<"\n";
	
	//space
	cout<<"----------------------------------\n"<<endl;
	
	//output
	cout<<"Data Pelanggan Toko Sembako\n"<<endl;
  cout<<"---------------------------\n"<<endl;
	cout<<"Nama Pelanggan		    : "<<nama<<endl;
	cout<<"Alamat Pelanggan	    : "<<alamat<<endl;
	cout<<"Email Pelanggan		  : "<<email<<endl;
	cout<<"No Telepon Pelanggan	: "<<telepon<<endl;
	
	getch();
}
