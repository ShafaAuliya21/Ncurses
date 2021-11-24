#include <ncurses/ncurses.h> 
#include <string>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1,COLOR_CYAN,COLOR_BLACK);
	init_pair(2,COLOR_RED,COLOR_BLACK);
	    
	string kapital[12]={"S","H","A","F","A"," ","A","U","L","I","Y","A",};
	
	for(int i=0; i<12; i++){
	    attron(COLOR_PAIR(i%2+1));
	    printw("shafa auliya");
		mvprintw(0,i,kapital[i].c_str());
		refresh();
		Sleep(1000); 
		attroff(COLOR_PAIR(i%2+1));
		clear();
	}	
	getch();   
	
	endwin();
}
