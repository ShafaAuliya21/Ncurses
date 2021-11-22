#include <ncurses/ncurses.h>
using namespace std;

int main(){
	
	//memulai curses
	initscr();
	
	printw("Helo World \n");
	
	//refresh terminal
	refresh();
	
	//meminta user menekan 1 tombol
	getch();
	
	//menutup mode curses
	endwin();		
}
