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
		mvprintw(9, 20, "4) SALIR");
		mvprintw(10, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if (respuesta1[0] == '1')
		{
			char respuesta2[1];
			mvprintw(5, 20, "QUE TIPO DE RECURSO DESEA IMPORTAR?");
			mvprintw(6, 20, "1) ITEM");
			mvprintw(7, 20, "2) ARMA");
			mvprintw(8, 20, "ELIGA OPCION: ");
			getstr(respuesta2);
			cleanScreen();
			if (respuesta2[0] == '1') //Agregar items y armas+
			{
				mvprintw(5, 20, "INGRESE NOMBRE DEL ITEM: ");
				char nombreItem[50];
				getstr(nombreItem);
				string nombre1 = static_cast<char*>(nombreItem);
				mvprintw(6, 20, "INGRESE PRECIO: ");
				char precioItem[10];
				getstr(precioItem);
				string precio1(precioItem);
				int precio2 = atoi(precio1.c_str());

				mvprintw(7, 20, "INGRESE EL TIPO DE ITEM: ");
				mvprintw(8, 20, "1) CURATIVA");
				mvprintw(9, 20, "2) BOOST");
				mvprintw(10, 20, "ELIGA OPCION: ");
				char tipoItem[1];
				getstr(tipoItem);
				if (tipoItem[0] == '1')
				{
					mvprintw(11, 20, "CUANTA HP VA A CURAR ESTE ITEM? - ");
					char curar1[10];
					getstr(curar1);
					string curar2(curar1);
					int curar3 = atoi(curar2.c_str());
					listaItems.push_back(new Curativas(nombre1, precio2, curar3));
					mvprintw(12, 20, "ITEM AGREGADO EXITOSAMENTE!");
					getch();
					cleanScreen();
				} else {
					mvprintw(11, 20, "CUANTO BOOST VA A DAR ESTE ITEM? - ");
					char boost1[10];
					getstr(boost1);
					string boost2(boost1);
					int boost3 = atoi(boost2.c_str());
					listaItems.push_back(new Boosts(nombre1, precio2, boost3));
					mvprintw(12, 20, "ITEM AGREGADO EXITOSAMENTE!");
					getch();
					cleanScreen();
				}
			} else {
				mvprintw(5, 20, "INGRESE NOMBRE DEL ARMA: ");
				char nombreArma[50];
				getstr(nombreArma);
				string nombre2 = static_cast<char*>(nombreArma);
				mvprintw(6, 20, "INGRESE PRECIO: ");
				char precioArma[10];
				getstr(precioArma);
				string precio3(precioArma);
				int precio4 = atoi(precio3.c_str());
				mvprintw(7, 20, "EL ARMA SERA MAGICA? (S/N) : ");
				char magicaC[1];
				getstr(magicaC);
				bool magica;
				if (magicaC[0] == 'S' || magicaC[0] == 's')
				{
					magica = true;
				} else {
					magica = false;
				}
				mvprintw(8, 20, "CUANTO ATAQUE TENDRA EL ARMA? : ");
				char cantAtk[10];
				getstr(cantAtk);
				string cantAtk1(cantAtk);
				int cantAtk2 = atoi(cantAtk1.c_str());
				mvprintw(9, 20, "CUANTA DEFENSA TENDRA EL ARMA? : ");
				char cantDef[10];
				getstr(cantDef);
				string cantDef1(cantDef);
				int cantDef2 = atoi(cantDef1.c_str());

				char tipoArma[1];
				mvprintw(5, 20, "QUE TIPO DE ARMA DESEA IMPORTAR?");
				mvprintw(6, 20, "1) ATAQUE");
				mvprintw(7, 20, "2) DEFENSA");
				mvprintw(8, 20, "ELIGA OPCION: ");
				getstr(tipoArma);
				cleanScreen();
				if (tipoArma[0] == '1')
				{
					listaArmas.push_back(new ArmaAtk(nombre2, precio4, magica, cantAtk2, (cantDef2 - 20)));
				} else {
					listaArmas.push_back(new ArmaDef(nombre2, precio4, magica, (cantAtk2 - 20), cantDef2));
				}
			}
		} else if (respuesta1[0] == '2') //Agregar Mounstros
		{
			
		} else if (respuesta1[0] == '3') //Empezar aventura
		{
			cleanScreen();
			mvprintw(8, 20, "BIENVENIDO JOVEN AVENTURROE A LA HERMOSA TIERRA DE LOS REINOS DE HYRULE ");
			mvprintw(8, 20, "PARA COMENZAR ESTA AVENTURA DEBE INGRESAR EL NOMBRE DEL VALIENTE: ");
			char nombrelink[50];
			getstr(nombrelink);

		} else {
			seguir = false;
		}
	}

	/*
	string nom1 = listaItems.at(0) -> getNombre();
	int p1 = listaItems.at(0) -> getPrecio();
	int c1 = listaItems.at(0) -> getCuracion();
	char myArray[nom1.size()+1];
	strcpy(myArray, nom1.c_str());
	
	mvprintw(13, 20, "Nombre: %s", myArray);
	mvprintw(14, 20, "Precio: %i", p1);
	mvprintw(15, 20, "Curacion: %i", c1);
	getch();
	*/

	mvprintw(10, 20, "MEMORIA LIBERADA! NOS VEMOS LUEGO!");
	getch();

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

/*template <typename T>
string Zelda::to_string(T pNumber)
{
	ostringstream oOStrStream;
	oOStrStream << pNumber;
	return oOStrStream.str();
}*/