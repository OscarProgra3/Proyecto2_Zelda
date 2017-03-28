#include "Zelda.h"

using namespace std;

Zelda::Zelda() {
}

void Zelda::run() {
	initscr();
	start_color();
	echo();
	boardPic();
	dibujologo();
	getch();
	cleanScreen();
	bool seguir = true;
	while(seguir == true) {
		char respuesta1[1];
		mvprintw(5, 20, "BIENVENIDO AL MUNDO DE ZELDA! ESCOGA UNA ACCION:");
		mvprintw(6, 20, "1) IMPORTAR RECURSOS");
		mvprintw(7, 20, "2) ABRIR EL PORTAL AL INFRAMUNDO");
		mvprintw(8, 20, "3) EMPEZAR AVENTURA");
		mvprintw(9, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if (respuesta1[0] == '1')
		{
			mvprintw(5, 20, "OPCION 1");
			getch();
			cleanScreen();
		}
		seguir = false;
	}
	//cleanScreen()
	noecho();
	endwin();
}

void Zelda::dibujologo()
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

void Zelda::boardPic(){
	move(1,1);
}

void Zelda::cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}

void Zelda::dibujolink()
{
	mvprintw(1,20,"      .---_   _--._---.__ \n    /   _ \\/\\     \\     ''-. \n   |   / \\ | \\      '.     '.     .'¯| \n   |  / __\\|  '.      '.     '    \\ _| \n   | | |_  .-'_'.      .    _.-|  $$ \n   | | \\U\\ .¯U' '..    _.-' .'  $$ \n    \\| /¯ /  ¯¯     ' |'   .'|   $$ \n      \\| '-          '|  .'  |  $$ \n        \\ --         /.      \\ $$ \n         \\          .'   __   |$$ \n          '.   ___.'  | ////¯¯''.._ \n            ¯|¯      _'.//_ ..   |||| \n       _ .-¯|\\|----¯¯¯  |\\|¯¯|---|||| \n    .-¯.'  |  X      .''  \\  |       ''. \n   '    ''..      .''__... |/           '. \n   | |    .|   .' .-   / \\|              | \n  /  '      '.'...'   /  /               | \n /_ |        '       /  /     |          | \n  |¯|                 '  '     \\| __.-.___.' \n  | |              /  /        |\\         \\  \n  | .             /  /           |        . \n  | '            '  '            |        ' \n   \\ .        /  /               '        | \n   /  '      '  '                 |       \\ \n  /   '                           |        |\n");
}