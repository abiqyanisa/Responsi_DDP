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
	float Bitcoin;
	string Type;
	
	//title
	cout << "------------Klasifikasi Tingkat Holder Bitcoin------------" << endl;
	cout << endl;
	
	//input
	cout << "Masukan Jumlah Bitcoin yang Anda Miliki : "; cin >> Bitcoin;
	
	//space
	cout << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << endl;
	
	//Ranking Type
	if (Bitcoin < 1){
		Type = "Shrimp";
	}
	
	else if (Bitcoin >= 1 && Bitcoin < 10){
		Type = "Crab";
	}
	
	else if (Bitcoin >= 10 && Bitcoin < 50){
		Type = "Octopus";
	}
	
	else if (Bitcoin >= 50 && Bitcoin < 100){
		Type = "Fish";
	}
	
	else if (Bitcoin >= 100 && Bitcoin < 500){
		Type = "Dolphin";
	}
	
	else if (Bitcoin >= 500 && Bitcoin < 1000){
		Type = "Shark";
	}
	
	else if (Bitcoin >= 1000 && Bitcoin < 5000){
		Type = "Whale";
	}
	
	else if (Bitcoin > 5000){
		Type = "Humpback";
	}
	
	//output
	cout << "Tipe Ranking Bitcoin Anda : " << Type << endl;
	
	getch();
	
}
