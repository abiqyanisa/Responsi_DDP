/*
	Nama  : Fathimah Abiyyi Khairunnisa
	NPM   : 2117051088
	Kelas : B
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//variable
	float n, rata, usd, total;
	
	//input
	cin >> n;
	
	//loop
	for(int i=1; i<=n; i++){
		float x;
		cin >> x;
		total += x;
		rata = total/n;
		usd = rata * 4000;
	} 
	
	//space
	cout << endl;
	
	//output
	cout << "Rata-rata\t: " << rata << " ETH" << endl;
	cout << "Total ETH\t: " << total << " ETH" << endl;
	cout << "Dalam USD\t: $" << usd << endl;

  getch();
  
}
