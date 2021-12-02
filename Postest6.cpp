/*
	Nama	: Fathimah Abiyyi Khairunnisa
	NPM		: 2117051088
	Kelas	: B
*/

#include <ncurses.h>
#include <windows.h>

using namespace std; 

//void nama
void animasi(char nama[50]){
	for(int i=0; i<strlen(nama); i++){
		printw("%c", nama[i]);
		refresh();
		Sleep(300);	
	}
}

int main(){
		
	initscr();
	
	mvprintw(1,2, "Tekan Enter untuk Mencetak Kartu Nama");
	getch();
	clear();
	
	//judul
	mvprintw(1,2, "---- CETAK KARTU NAMA ----");
		
	mvprintw(3,10, "Loading");
	
	//kotak "loading"	
	mvprintw(4,3, "------------------------");
	mvprintw(5,3, "|	  	   	  |");
	mvprintw(6,3, "------------------------");
	
	//loop sleep "loading"		
	for(int n=1; n<12; n++){
			 
		for(int i=1; i<5; i++){
			
			mvprintw(3,16+i, ".");
			refresh();
			Sleep(100);
	
		}
			
		mvprintw(5,2+n+n, "]]");
		refresh();
		Sleep(300);
			
	}
		
	clear();
	
	//kotak nama	
	mvprintw(1,3, "------------------------------");
	mvprintw(2,3, "|	  	   		|");
	mvprintw(3,3, "|	  	   		|");
	mvprintw(4,3, "|	  	   		|");
	mvprintw(5,3, "|	  	   		|");
	mvprintw(6,3, "------------------------------");
		
	mvprintw(3,6, "Nama : ");
	animasi("fathimah abiyyi");
	mvprintw(4,6, "NPM  : ");
	animasi("2117051088");
	
	getch();
	endwin();
	return 0;
	
}
