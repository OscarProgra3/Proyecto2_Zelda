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
		mvprintw(9, 20, "4) VER LISTAS");
		mvprintw(10, 20, "5) SALIR: ");
		mvprintw(11, 20, "ELIGA OPCION: ");
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
				mvprintw(10, 20, "QUE TIPO DE ARMA DESEA IMPORTAR?");
				mvprintw(11, 20, "1) ATAQUE");
				mvprintw(12, 20, "2) DEFENSA");
				mvprintw(13, 20, "ELIGA OPCION: ");
				getstr(tipoArma);
				cleanScreen();
				if (tipoArma[0] == '1')
				{
					listaArmas.push_back(new ArmaAtk(nombre2, precio4, magica, cantAtk2, (cantDef2 - 20)));
					mvprintw(14, 20, "ARMA AGREGADA EXITOSAMENTE!");
					getch();
					cleanScreen();
				} else {
					listaArmas.push_back(new ArmaDef(nombre2, precio4, magica, (cantAtk2 - 20), cantDef2));
					mvprintw(14, 20, "ARMA AGREGADA EXITOSAMENTE!");
					getch();
					cleanScreen();
				}
			}
		} else if (respuesta1[0] == '2') //Agregar Mounstros
		{
			mvprintw(5, 20, "INGRESE HP DEL MOUNSTRO: ");
			char HPmonster[10];
			getstr(HPmonster);
			string HPmonster1(HPmonster);
			int HPmonster2 = atoi(HPmonster1.c_str());

			mvprintw(6, 20, "INGRESE ATAQUE DEL MOUNSTRO: ");
			char ATKmonster[10];
			getstr(ATKmonster);
			string ATKmonster1(ATKmonster);
			int ATKmonster2 = atoi(ATKmonster1.c_str());

			mvprintw(7, 20, "INGRESE LA RECOMPENSA DEL MOUNSTRO: ");
			char DINEROmonster[10];
			getstr(DINEROmonster);
			string DINEROmonster1(DINEROmonster);
			int DINEROmonster2 = atoi(DINEROmonster1.c_str());

			listaMonsters.push_back(new Monster(HPmonster2, ATKmonster2, DINEROmonster2));

			mvprintw(8, 20, "MOUNSTRO AGREGADO EXITOSAMENTE!");
			getch();
			cleanScreen();

		} else if (respuesta1[0] == '3') //Empezar aventura
		{
			cleanScreen();
			mvprintw(8, 30, "BIENVENIDO JOVEN AVENTURROE A LA HERMOSA TIERRA DE LOS REINOS DE HYRULE \n");
			mvprintw(9, 20, "PARA COMENZAR ESTA AVENTURA DEBE INGRESAR EL NOMBRE DEL VALIENTE: ");
			char nombrelink[50];
			getstr(nombrelink);

		} else if (respuesta1[0] == '4')
		{
			imprimirItems(listaItems);
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

void Zelda::imprimirItems(vector<Items*> listaItems2) {
	string nom1;
	int p1, c1;
	int cont = 5;

	mvprintw(cont, 20, "LOS ITEMS DISPONIBLES SON: ");
	cont++;
	for (int i = 0; i < listaItems2.size(); ++i)
	{
		if (listaItems2.at(i) -> getTipo() == "Curativa")
		{
			string nom1 = listaItems2.at(i) -> getNombre();
			p1 = listaItems2.at(i) -> getPrecio();
			c1 = listaItems2.at(i) -> getNum();
			char myArray[nom1.size()+1];
			strcpy(myArray, nom1.c_str());
			
			mvprintw(cont, 20, "%i", (i+1));
			mvprintw(cont, 21, ")");
			cont++;
			mvprintw(cont, 20, "TIPO: CURACION");
			cont++;
			mvprintw(cont, 20, "NOMBRE: %s", myArray);
			cont++;
			mvprintw(cont, 20, "PRECIO: %i", p1);
			cont++;
			mvprintw(cont, 20, "CURACION: %i", c1);
			cont++;
		} else {
			string nom1 = listaItems2.at(i) -> getNombre();
			p1 = listaItems2.at(i) -> getPrecio();
			c1 = listaItems2.at(i) -> getNum();
			char myArray[nom1.size()+1];
			strcpy(myArray, nom1.c_str());
			
			mvprintw(cont, 20, "%i", (i+1));
			mvprintw(cont, 21, ")");
			cont++;
			mvprintw(cont, 20, "TIPO: BOOST");
			cont++;
			mvprintw(cont, 20, "NOMBRE: %s", myArray);
			cont++;
			mvprintw(cont, 20, "PRECIO: %i", p1);
			cont++;
			mvprintw(cont, 20, "AUMENTO: %i", c1);
			cont++;
		}
	}
	getch();
	cleanScreen();
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

void Zelda::dibujoMounstro() {
	srand(time(NULL));
	int random=rand()% 3 +1;

	if (random==1)
	{
		mvprintw(50,50,"											(								\n");
		mvprintw(51,50,"		                                    )								\n");
		mvprintw(52,50,"		                                   (								\n");
		mvprintw(53,50,"		                                    )								\n");
		mvprintw(54,50,"		                               [^^^^^^^^^]							\n");
		mvprintw(55,50,"		                           $$$$           $$$$						\n");
		mvprintw(56,50,"		                        $$$                   $$$					\n");
		mvprintw(57,50,"		                      $$                         $$					\n");
		mvprintw(58,50,"		                     $      (00)         (00)      $				\n");
		mvprintw(59,50,"		                    $      (0000)       (0000)      $				\n");
		mvprintw(60,50,"		                   $      (000000)     (000000)      $				\n");
		mvprintw(61,50,"		                   $       (0000)       (0000)       $				\n");
		mvprintw(62,50,"		                   $        (00)         (00)        $				\n");
		mvprintw(63,50,"		                   $                                 $				\n");
		mvprintw(64,50,"		                    $                               $				\n");
		mvprintw(65,50,"		                     $                             $				\n");
		mvprintw(66,50,"		                      $$                         $$					\n");
		mvprintw(67,50,"		                        $$$                   $$$					\n");
		mvprintw(68,50,"		                           $$$$           $$$$						\n");
		mvprintw(69,50,"		                               $$$$$$$$$$$							\n");
		mvprintw(70,50,"		                               $         $							\n");
		mvprintw(71,50,"		                           $$$$$         $$$$$						\n");
		mvprintw(72,50,"		                          $$$$$$         $$$$$$						\n");
	}
	if (random==2)
	{
		mvprintw(50,50,"			                        .-****-.				\n");
		mvprintw(51,50,"	                               / _   _ \\			\n");
		mvprintw(52,50,"	           _..._              | (') (') |			\n");
		mvprintw(53,50,"	         .'_   _'.       _.-._| ._____, |_.-._  	\n");
		mvprintw(54,50,"	        / (.) (.) \\     (== |-|    `-`  |-| ==)		\n");
		mvprintw(55,50,"	   _.-._| ,_____. |_.-._ ``  \\    M    /  			\n");
		mvprintw(56,50,"	  *(== |-\\    '-'  /-| ==)      '._____.'			\n");
		mvprintw(57,50,"	        '.__M__.'              //   \\				\n");
		mvprintw(58,50,"	        __//   \\__            _\\   //_ 			\n");
		mvprintw(59,50,"	       (___)   (___)          (___) (___)			\n");
	}
	if (random==3)
	{
		mvprintw(50,50,"		         	 HHH+          		\n");
		mvprintw(51,50,"               +H+;;;H   +H+   		\n");
		mvprintw(52,50,"              +H+;;  ;H H+;;+  		\n");
		mvprintw(53,50,"         +HHHH+;;;;; ;HH+;  H  		\n");
		mvprintw(54,50,"       +H++;;;;;;;;;;;;++;  ;+ 		\n");
		mvprintw(55,50,"       H+;;;;;;;;;;;;;;;;;; +H 		\n");
		mvprintw(56,50,"      +++;;;;;;;;;;H;;;;;;;;+H 		\n");
		mvprintw(57,50,"      H+;;;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(58,50,"   +HH+;;;;;;;;;;;;;;;;;;;;;++ 		\n");
		mvprintw(59,50," HH;;;;;;;;;;H;;;;;;+HH;;;;+H  		\n");
		mvprintw(60,50,"++;  ;;;;;;;;;;;;+HH;;;;;;;+H  		\n");
		mvprintw(61,50,"H+; ;;;;;;;;;;;+H;;;;;;;;;;+H  		\n");
		mvprintw(62,50,"H++;;;;;;;;;;H+;;;;;;;;;;;;+H  		\n");
		mvprintw(63,50," H++;;;;;;;;H;;;;;;;;;;;;;;++  		\n");
		mvprintw(64,50," +H+++;;;;;;;;;;;;;;;;;;;;;+;+ 		\n");
		mvprintw(65,50,"  H++++;;;;;;;;;;;;;;;;;;;;;;H+		\n");
		mvprintw(66,50,"   H+++;;; ;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(67,50,"   +H++;;;;;  ;;;;;;;;;;;;;;;HH 		\n");
		mvprintw(68,50,"   H++;;;;;    ;;;;;;;;;;;;;+H 		\n");
		mvprintw(69,50,"   H+;;;;;;    ;;;;;;;;;+++HH  		\n");
		mvprintw(70,50,"  +++;;;;;;;  ;;;;;;;;++++H    		\n");
		mvprintw(71,50,"  H+;;;;;;;;;;;;;;;;;++HHH     		\n");
		mvprintw(72,50,"  H++;;;;;;;;+++;;;;;+H        		\n");
		mvprintw(73,50,"  H++;;;;;;;++++++;;;+H        		\n");
		mvprintw(74,50,"  +++++;;;++++HHH+++HH         		\n");
		mvprintw(75,50,"   H+++++++HH+  +HH+           		\n");
		mvprintw(76,50,"   +H++++H+                    		\n");
		mvprintw(77,50,"     +HH+							\n");
	}
	
}


void getdibujoreinotierra()
{


	mvprintw(50,50,"                                  |>>>													\n");
	mvprintw(52,50,"                                  |														\n");
	mvprintw(53,50,"                    |>>>      _  _|_  _         |>>>										\n");
	mvprintw(54,50,"                    |        |;| |;| |;|        |										\n");
	mvprintw(55,50,"                _  _|_  _    \\.    .  /    _  _|_  __ 									\n");
	mvprintw(56,50,"               |;|_|;|_|;|    \\:. ,  /    |;|_|;|_|;|									\n");
	mvprintw(57,50,"               \\..      /    ||;   . |    \\.    .  /									\n");
	mvprintw(58,50,"                \\.  ,  /     ||:  .  |     \\:  .  /									\n");
	mvprintw(59,50,"                 ||:   |_   _ ||_ . _ | _   _||:   |										\n");
	mvprintw(60,50,"                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |										\n");
	mvprintw(61,50,"                 ||:   ||.    .     .      . ||:  .|										\n");
	mvprintw(62,50,"                 ||: . || .     . .   .  ,   ||:   |       \\,/							\n");
	mvprintw(63,50,"                 ||:   ||:  ,  _______   .   ||: , |            /`\\						\n");
	mvprintw(64,50,"                 ||:   || .   /+++++++\\    . ||:   |										\n");
	mvprintw(65,50,"                 ||:   ||.    |+++++++| .    ||: . |										\n");
	mvprintw(66,50,"              __ ||: . ||: ,  |+++++++|.  . _||_   |										\n");
	mvprintw(67,50,"     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___ 					\n");
	mvprintw(68,50,"-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~			\n");
}