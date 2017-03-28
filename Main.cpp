#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#include <typeinfo>


#include <ncurses.h>
//#include <cstdlib>

#include "Agua.h"
#include "ArmaAtk.h"
#include "ArmaDef.h"
#include "Armas.h"
#include "Azul.h"
#include "Boosts.h"
#include "Cofre.h"
#include "CofreEpico.h"
#include "CofreNormal.h"
#include "Curativas.h"
#include "Fuego.h"
#include "Items.h"
#include "Link.h"
#include "Monster.h"
#include "Mundo.h"
#include "Reino.h"
#include "Roja.h"
#include "Ropa.h"
#include "Sobrecarga.h"
#include "Tienda.h"
#include "Tierra.h"
#include "Verde.h"


#include <fstream>//para archivos binarios

using namespace std;


void dibujolink();
string dibujodemonio();
void dibujologo();


void run();
void boardPic();
void cleanScreen();



int main()
{

	vector<Items*> listaitems;
	vector<Armas*> listaarmas;
	vector<Monster*> listamonster;
	Link* link;
	Mundo* mundo;


	run(listaitems,listaarmas,listamonster);


	initscr();
	start_color();
	echo();
	boardPic();



//	move(4,80);
  	//dibujolink();
  //	move(8,80);
  //	printw("EASTER EGG"<<endl<<dibujodemonio());

	dibujologo();
	getch();
	
	cleanScreen();
	dibujolink();
//	getch();
	//noecho();
	

  	move(18,80);
  	char  namePlayer1[50];
	printw("Name of player 1: ");
	getstr(namePlayer1);
	string namePlayer1String = static_cast<char*>(namePlayer1);



	//cleanScreen();


listaarmas.push_back(new ArmaAtk("Haramblade",500,true,20,15));
listaarmas.push_back(new ArmaAtk("marihuanablade",300,false,30,44));



listaitems.push_back(new Curativas("sagre de santo",200,300));
listaitems.push_back(new Curativas("elixir de dioses",40,20));

Mundo* mundo=new Mundo(listaarmas,listaitems);


//cout<<endl<<"-------------------------------"<<endl;




  return 0;
}



void run()
{
	int resp=9;
	while

}

void dibujolink()
{
  
mvprintw(1,1,"      .---_   _--._---.__ \n    /   _ \\/\\     \\     ''-. \n   |   / \\ | \\      '.     '.     .'¯| \n   |  / __\\|  '.      '.     '    \\ _| \n   | | |_  .-'_'.      .    _.-|  $$ \n   | | \\U\\ .¯U' '..    _.-' .'  $$ \n    \\| /¯ /  ¯¯     ' |'   .'|   $$ \n      \\| '-          '|  .'  |  $$ \n        \\ --         /.      \\ $$ \n         \\          .'   __   |$$ \n          '.   ___.'  | ////¯¯''.._ \n            ¯|¯      _'.//_ ..   |||| \n       _ .-¯|\\|----¯¯¯  |\\|¯¯|---|||| \n    .-¯.'  |  X      .''  \\  |       ''. \n   '    ''..      .''__... |/           '. \n   | |    .|   .' .-   / \\|              | \n  /  '      '.'...'   /  /               | \n /_ |        '       /  /     |          | \n  |¯|                 '  '     \\| __.-.___.' \n  | |              /  /        |\\         \\  \n  | .             /  /           |        . \n  | '            '  '            |        ' \n   \\ .        /  /               '        | \n   /  '      '  '                 |       \\ \n  /   '                           |        |\n");
  //return linkp;
}

string dibujodemonio()
{
  string mon="\n   .__                           __.\n  \\ `\\~~---..---~~~~~~--.---~~| /   \n   `~-.   `                   .~         _____ \n       ~.                .--~~    .---~~~    /\n        / .-.      .-.      |  <~~        __/\n       |  |_|      |_|       \\  \\     .--'\n      /-.      -       .-.    |  \\_   \\_\n      \\-'   -..-..-    `-'    |    \\__  \\_ \n       `.                     |     _/  _/\n         ~-                .,-\\   _/  _/\n        /                 -~~~~\\ /_  /_\n       |               /   |    \\  \\_  \\_ \n       |   /          /   /      | _/  _/\n       |  |          |   /    .,-|/  _/ \n       )__/           \\_/    -~~~| _/\n         \\                      /  \\\n          |           |        /_---` \n          \\    .______|      ./\n          (   /        \\    /        \n          `--'          /__/";
  return mon;
}


void cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}

void boardPic(){
	move(1,1);
}

void dibujologo()
{
	mvprintw(1,20,"	                                   /@								\n");
	mvprintw(2,20,"                       __        __   /\\/											\n");		
	mvprintw(3,20,"                      /==\\      /  \\_/\\/   										\n"); 											
	mvprintw(4,20,"                    /======\\    \\/\\__ \\__ 										\n");											
	mvprintw(5,20,"                  /==/\\  /\\==\\    /\\_|__ \\										\n");												
	mvprintw(6,20,"               /==/    ||    \\=\\ / / / /_/											\n");													
	mvprintw(7,20,"             /=/    /\\ || /\\   \\=\\/ /     										\n");
	mvprintw(8,20,"          /===/   /   \\||/   \\   \\===\\											\n");
	mvprintw(9,20,"        /===/   /_________________ \\===\\											\n");
	mvprintw(10,20,"     /====/   / |                /  \\====\\											\n");
	mvprintw(11,20,"   /====/   /   |  _________    /  \\   \\===\\    THE LEGEND OF 						\n");
	mvprintw(12,20,"   /==/   /     | /   /  \\ / / /  __________\\_____      ______       ___ 			\n");
	mvprintw(13,20,"  |===| /       |/   /____/ / /   \\   _____ |\\   /      \\   _ \\      \\  \\ 			\n");
	mvprintw(14,20,"   \\==\\             /\\   / / /     | |  /= \\| | |        | | \\ \\     / _ \\			\n");
	mvprintw(15,20,"   \\===\\__    \\    /  \\ / / /   /  | | /===/  | |        | |  \\ \\   / / \\ \\ 			\n");
	mvprintw(16,20,"     \\==\\ \\    \\\\ /____/   /_\\ //  | |_____/| | |        | |   | | / /___\\ \\ 		\n");
	mvprintw(17,20,"     \\===\\ \\   \\\\\\\\\\\\\\/   /////// /|  _____ | | |        | |   | | |  ___  | 		\n");
	mvprintw(18,20,"       \\==\\/     \\\\\\\\/ / //////   \\| |/==/ \\| | |        | |   | | | /   \\ | 		\n");
	mvprintw(19,20,"       \\==\\     _ \\\\/ / /////    _ | |==/     | |        | |  / /  | |   | | 		\n");
	mvprintw(20,20,"         \\==\\  / \\ / / ///      /|\\| |_____/| | |_____/| | |_/ /   | |   | | 		\n");
	mvprintw(21,20,"         \\==\\ /   / / /________/ |/_________|/_________|/_____/   /___\\ /___\\		\n");
	mvprintw(22,20,"          \\==\\   /               | /==/ 												\n");
	mvprintw(23,20,"           \\=\\  /________________|/=/    											\n");
	mvprintw(24,20,"             \\==\\     _____     /==/ 												\n");
	mvprintw(25,20,"            / \\===\\   \\   /   /===/													\n");
	mvprintw(26,20,"           / / /\\===\\  \\_/  /===/													\n");
	mvprintw(27,20,"          / / /   \\====\\ /====/														\n");
	mvprintw(28,20,"         / / /      \\===|===/															\n");
	mvprintw(29,20,"         |/_/         \\===/															\n");
	mvprintw(30,20,"                        =  															\n");
	mvprintw(31,80,"                        APUCHURRALE START  		\n");


}