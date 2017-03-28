#include "Zelda.h"

using namespace std;

Zelda::Zelda() {
}

void Zelda::run() {
		srand(time(NULL));
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
		//Menu
		mvprintw(5, 20, "BIENVENIDO AL MUNDO DE ZELDA! ESCOGA UNA ACCION:");
		mvprintw(6, 20, "1) IMPORTAR RECURSOS");
		mvprintw(7, 20, "2) ABRIR EL PORTAL AL INFRAMUNDO");
		mvprintw(8, 20, "3) EMPEZAR AVENTURA");
		mvprintw(9, 20, "4) VER LISTAS");
		mvprintw(10, 20, "5) SALIR: ");
		mvprintw(11, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if (respuesta1[0] == '1')//Agregar items o armas
		{
			char respuesta2[1];
			mvprintw(5, 20, "QUE TIPO DE RECURSO DESEA IMPORTAR?");
			mvprintw(6, 20, "1) ITEM");
			mvprintw(7, 20, "2) ARMA");
			mvprintw(8, 20, "ELIGA OPCION: ");
			getstr(respuesta2);
			cleanScreen();
			if (respuesta2[0] == '1') //Agregar items
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
				if (tipoItem[0] == '1') //Agrega item curativo
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
				} else { //Agrega item boosteador
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
			} else { //Agregar armas
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
				{ //Mira si es magica o no
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
				{// Agrega arma de ataque
					listaArmas.push_back(new ArmaAtk(nombre2, precio4, magica, cantAtk2, (cantDef2 - 150)));
					mvprintw(14, 20, "ARMA AGREGADA EXITOSAMENTE!");
					getch();
					cleanScreen();
				} else { //Agrega arma de defensa
					listaArmas.push_back(new ArmaDef(nombre2, precio4, magica, (cantAtk2 - 150), cantDef2));
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



			vector<Reino*> listareinos;
			listareinos.push_back(new Agua("LAKE HYLIA",30));
			listareinos.push_back(new Fuego("MONTAÑA DE LA MUERTE",55));
			listareinos.push_back(new Tierra("PUEBLO KOKIRI",75));

			
			Mundo* mundo;
			mundo=new Mundo(listaArmas,listaItems);
			vector<Armas*> listatiendaarmas;
			vector<Items*> listatiendaitems;
			
			if (listaItems.size()>3 && listaArmas.size()>2)
			{
				listatiendaitems.push_back(listaItems.at(0));
				listatiendaitems.push_back(listaItems.at(2));
				listatiendaitems.push_back(listaItems.at(3));

				listatiendaarmas.push_back(listaArmas.at(0));
				listatiendaarmas.push_back(listaArmas.at(2));
			}
			

			Tienda* tienda;
			tienda=new Tienda(listatiendaarmas,listatiendaitems);

			cleanScreen();
			dibujolinkca();
			getch();
			mvprintw(8, 30, "BIENVENIDO JOVEN AVENTURROE A LA HERMOSA TIERRA DE LOS REINOS DE HYRULE \n");
			mvprintw(9, 30, "PARA COMENZAR ESTA AVENTURA DEBE INGRESAR EL NOMBRE DEL VALIENTE: ");			
			char nombrelink[50];
			getstr(nombrelink);
			string strnombrelink = static_cast<char*>(nombrelink);
			cleanScreen();

			dibujolink();
			

			char myArray[strnombrelink.size()+1];
			strcpy(myArray, strnombrelink.c_str());
			mvprintw(1, 30, "Como eres nuevo en esta aventura joven %s",myArray);
			mvprintw(2,30,"¡¡¡¡¡¡¡¡¡¡¡	TE CONCEDEREMOS 300 RUPIAS     !!!!!!!!!!!!  \n");
			mvprintw(3,30,"¡¡¡¡¡¡¡¡¡¡¡  TIENES 1000 DE HP              !!!!!!!!!!!!  \n");
			mvprintw(4,30,"¡¡¡¡¡¡¡¡¡¡¡	500 DE ATAQUE                  !!!!!!!!!!!!  \n");
			mvprintw(5,30,"¡¡¡¡¡¡¡¡¡¡¡	500 DE DEFENSA                 !!!!!!!!!!!!  \n");
			mvprintw(6,30,"¡¡¡¡¡¡¡¡¡¡¡	Y ANDAS CON LOS ROPAJES VERDES !!!!!!!!!!!!  \n");		
			getch();
			int bolsarupias=300;
			int HP=1000;
			int ataque=500;
			int defensa=500;
			int tiporopa=1;

			vector<Ropa*> ropajes;
			vector<Armas*> ListaArmaslink;
			vector<Items*> ListaItemslink;	

			Link* link;
			link=new Link(strnombrelink,bolsarupias,HP,ataque,defensa,tiporopa,ropajes,ListaArmaslink,ListaItemslink);
			
			char viaje[1];
			viaje[0]='7';
			while(viaje[0]!='4'){
				cleanScreen();
				dibujoreinonutral();
				dibujoneutral2();
				getch();
				mvprintw(1, 30, "AHORA PARTIRAS A TU AVENTURA A LAS TIERRAS DE ESTE MUNDO %s",myArray);
				mvprintw(2, 30, " EN LAS TIERRAS DE HYRULE EXISTENTRES REINOS ");
				mvprintw(3, 30, "1.- REINO DE TIERRA ");
				mvprintw(4, 30, "2.- REINO DE AGUA ");
				mvprintw(5, 30, "3.- REINO DE FUEGO ");
				mvprintw(6, 30, "4.- NO VIAJAR ");
				mvprintw(7, 30, ".- EN CUAL DE LOS REINOS DESEA ENTRAR ");
				

				getstr(viaje);
				
			
				int suerte=rand()% 100 +1;
				int tmc=0;
				if (suerte<60)
				{
					tmc=1;
				}else if (suerte>=60 && suerte<90)
				{
					tmc=2;
				}else
				{
					tmc=3;
				}


				if (viaje[0]=='1')//reino tierra
				{

					cleanScreen();
					dibujoreinotierra();
					mvprintw(1, 30, "BIENVENIDO A EL REINO DE LA TIERRA  %s",myArray);
					string nombrereino=listareinos.at(2)->getNombre();
					char myArrayreino[nombrereino.size()+1];
					strcpy(myArrayreino, nombrereino.c_str());
						
					int numha=listareinos.at(2)->getNumeroH();

					mvprintw(2, 30, "EL REINO DE  %s",myArrayreino);
					mvprintw(3, 30, "CON NUMERO DE HABITANTES DE  %i",numha);
					
					string tipoha=listareinos.at(2)->getTipoHabitante();

					char myArrayreinotipo[nombrereino.size()+1];
					strcpy(myArrayreinotipo, nombrereino.c_str());					
					
					mvprintw(4, 30, "TIPO DE HABITANTE  %s",myArrayreinotipo);

					getch();

					if (tmc==1)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UNA FEROZ BESTIA %s",myArray);
						srand(time(NULL));
						int tammon=listaMonsters.size()-1;
						int random=rand()% tammon +0;
						dibujoMounstro();

						int HP1 = listaMonsters.at(random) -> getHP();
						int ataque1 = listaMonsters.at(random) -> getAtaque();
						int dinero1 = listaMonsters.at(random) -> getDinero();

						mvprintw(20, 20, "HP: %i", HP1);
						mvprintw(21, 20, "ATAQUE: %i", ataque1);
						mvprintw(22, 20, "DINERO: %i", dinero1);
						getch();
					}
					if (tmc==2)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE %s",myArray);
						dibujocofrenormal();
						getch();
					}
					if (tmc==3)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE EPICO!!!!!!!!!!!!!!!!!!!!!!!! %s",myArray);
						dibujocofrenormal();
						getch();
					}

				}//fin reino tierra
				if (viaje[0]=='2')//reino agua
				{
					
					cleanScreen();
					dibujoreinoagua();
					mvprintw(1, 30, "BIENVENIDO A EL REINO DE DE FUEGO   %s",myArray);
					string nombrereino=listareinos.at(1)->getNombre();
					char myArrayreino[nombrereino.size()+1];
					strcpy(myArrayreino, nombrereino.c_str());
			
					mvprintw(2, 30, "EL REINO DE  %s",myArrayreino);
					int numha=listareinos.at(1)->getNumeroH();
					mvprintw(3, 30, "CON NUMERO DE HABITANTES DE  %i",numha);
					
					string tipoha=listareinos.at(1)->getTipoHabitante();

					char myArrayreinotipo[nombrereino.size()+1];
					strcpy(myArrayreinotipo, nombrereino.c_str());					
					
					mvprintw(4, 30, "TIPO DE HABITANTE  %s",myArrayreinotipo);

					getch();

					if (tmc==1)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UNA FEROZ BESTIA %s",myArray);
						
						int tammon=listaMonsters.size()-1;
						int random=rand()% tammon +0;
						dibujoMounstro();

						int HP1 = listaMonsters.at(random) -> getHP();
						int ataque1 = listaMonsters.at(random) -> getAtaque();
						int dinero1 = listaMonsters.at(random) -> getDinero();

						mvprintw(20, 20, "HP: %i", HP1);
						mvprintw(21, 20, "ATAQUE: %i", ataque1);
						mvprintw(22, 20, "DINERO: %i", dinero1);
						getch();
					}
					if (tmc==2)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE %s",myArray);
						dibujocofrenormal();
						getch();
					}
					if (tmc==3)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE EPICO!!!!!!!!!!!!!!!!!!!!!!!! %s",myArray);
						dibujocofrenormal();
						getch();
					}


				}
				if (viaje[0]=='3')//fuego
				{

					cleanScreen();
					dibujoreinoagua();
					mvprintw(1, 30, "BIENVENIDO A EL REINO LAS AGUAS %s",myArray);
					string nombrereino=listareinos.at(0)->getNombre();
					char myArrayreino[nombrereino.size()+1];
					strcpy(myArrayreino, nombrereino.c_str());
			
					mvprintw(2, 30, "EL REINO DE  %s",myArrayreino);
						int numha=listareinos.at(0)->getNumeroH();
					mvprintw(3, 30, "CON NUMERO DE HABITANTES DE  %i",numha);
					
					string tipoha=listareinos.at(0)->getTipoHabitante();

					char myArrayreinotipo[nombrereino.size()+1];
					strcpy(myArrayreinotipo, nombrereino.c_str());					
					
					mvprintw(4, 30, "TIPO DE HABITANTE  %s",myArrayreinotipo);

					getch();

					if (tmc==1)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UNA FEROZ BESTIA %s",myArray);
						int tammon=listaMonsters.size()-1;
						int random=rand()% tammon +0;
						dibujoMounstro();

						int HP1 = listaMonsters.at(random) -> getHP();
						int ataque1 = listaMonsters.at(random) -> getAtaque();
						int dinero1 = listaMonsters.at(random) -> getDinero();

						mvprintw(20, 20, "HP: %i", HP1);
						mvprintw(21, 20, "ATAQUE: %i", ataque1);
						mvprintw(22, 20, "DINERO: %i", dinero1);
						getch();
					}
					if (tmc==2)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE %s",myArray);
						dibujocofrenormal();
						getch();
					}
					if (tmc==3)
					{
						cleanScreen();
						mvprintw(1, 30, "TE HAS ENCONTRADO CON UN COFRE EPICO!!!!!!!!!!!!!!!!!!!!!!!! %s",myArray);
						dibujocofrenormal();
						getch();
					}


				}


			}







			cleanScreen();
		} else if (respuesta1[0] == '4') //Imprimir listas
		{
			mvprintw(5, 20, "QUE DESEA VER?");
			mvprintw(6, 20, "1) VER ITEMS DISPONIBLES");
			mvprintw(7, 20, "2) VER ARMAS DISPONIBLES");
			mvprintw(8, 20, "3) VER MOUNSTROS VIVOS");
			mvprintw(9, 20, "4) SUMA DE ITEMS Y MOUNSTROS EXISTENTES");
			mvprintw(10, 20, "5) RESTA DE ITEMS Y MOUNSTROS EXISTENTES");
			mvprintw(11, 20, "ELIGA UNA OPCION: ");
			char tipoImprimir[1];
			getstr(tipoImprimir);
			if (tipoImprimir[0] == '1')//Imprime items
			{
				cleanScreen();
				imprimirItems();
			} else if (tipoImprimir[0] == '2')//Imprime armas
			{
				cleanScreen();
				imprimirArmas();
			} else if (tipoImprimir[0] == '3')//Imprime mounstros
			{
				cleanScreen();
				imprimirMonsters();
			} else if(tipoImprimir[0] == '4') { //Imprime suma de mounstros y items con sobrecarga
				cleanScreen();
				Sobrecarga* SB = new Sobrecarga(listaItems.size());
				Sobrecarga* SB2 = new Sobrecarga(listaMonsters.size());
				SB2 = *SB + SB2;
				int suma = SB2 -> getNum();
				mvprintw(10, 20, "LA SUMA DE LOS DOS ES DE: %i", suma);
				delete SB;
				delete SB2;
				getch();
				cleanScreen();
			} else {
				cleanScreen();
				Sobrecarga* SB = new Sobrecarga(listaItems.size());
				Sobrecarga* SB2 = new Sobrecarga(listaMonsters.size());
				SB2 = *SB - SB2;
				int resta = SB2 -> getNum();
				mvprintw(10, 20, "LA RESTA DE LOS DOS ES DE: %i", resta);
				delete SB;
				delete SB2;
				getch();
				cleanScreen();
			}
		} else { //Salir
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

	mvprintw(10, 20, "NOS VEMOS LUEGO!");
	getch();

	//cleanScreen()
	noecho();
	endwin();
}

void Zelda::imprimirItems() {
	string nom1;
	int p1, c1;
	int cont = 5;

	mvprintw(cont, 20, "LOS ITEMS DISPONIBLES SON: ");
	cont++;
	for (int i = 0; i < listaItems.size(); ++i)
	{
		if (listaItems.at(i) -> getTipo() == "Curativa")
		{
			nom1 = listaItems.at(i) -> getNombre();
			p1 = listaItems.at(i) -> getPrecio();
			c1 = listaItems.at(i) -> getNum();
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
			nom1 = listaItems.at(i) -> getNombre();
			p1 = listaItems.at(i) -> getPrecio();
			c1 = listaItems.at(i) -> getNum();
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
	mvprintw(cont, 20, "APRETE CUALQUIER TECLA PARA CONTINUAR: ");
	getch();
	cleanScreen();
}

void Zelda::imprimirArmas() {
	string nombre;
	int precio;
	bool magico;
	int ataque;
	int defensa;
	int cont = 5;

	mvprintw(cont, 20, "LAS ARMAS DISPONIBLES SON: ");
	cont++;
	for (int i = 0; i < listaArmas.size(); ++i)
	{
		nombre = listaArmas.at(i) -> getNombre();
		precio = listaArmas.at(i) -> getPrecio();
		magico = listaArmas.at(i) -> getMagico();
		ataque = listaArmas.at(i) -> getAtaque();
		defensa = listaArmas.at(i) -> getDefensa();
		if (listaArmas.at(i) -> getTipo() == "Ataque")
		{
			char myArray2[nombre.size()+1];
			strcpy(myArray2, nombre.c_str());
			if (magico == true)
			{
				mvprintw(cont, 20, "%i", (i+1));
				mvprintw(cont, 21, ")");
				cont++;
				mvprintw(cont, 20, "TIPO: ATAQUE");
				cont++;
				mvprintw(cont, 20, "NOMBRE: %s", myArray2);
				cont++;
				mvprintw(cont, 20, "PRECIO: %i", precio);
				cont++;
				mvprintw(cont, 20, "ES MAGICO? - SI");
				cont++;
				mvprintw(cont, 20, "ATAQUE: %i", ataque);
				cont++;
				mvprintw(cont, 20, "DEFENSA: %i", defensa);
				cont++;
			} else {
				mvprintw(cont, 20, "%i", (i+1));
				mvprintw(cont, 21, ")");
				cont++;
				mvprintw(cont, 20, "TIPO: ATAQUE");
				cont++;
				mvprintw(cont, 20, "NOMBRE: %s", myArray2);
				cont++;
				mvprintw(cont, 20, "PRECIO: %i", precio);
				cont++;
				mvprintw(cont, 20, "ES MAGICO? - NO");
				cont++;
				mvprintw(cont, 20, "ATAQUE: %i", ataque);
				cont++;
				mvprintw(cont, 20, "DEFENSA: %i", defensa);
				cont++;
			}
		} else {
			char myArray2[nombre.size()+1];
			strcpy(myArray2, nombre.c_str());
			if (magico == true)
			{
				mvprintw(cont, 20, "%i", (i+1));
				mvprintw(cont, 21, ")");
				cont++;
				mvprintw(cont, 20, "TIPO: DEFENSA");
				cont++;
				mvprintw(cont, 20, "NOMBRE: %s", myArray2);
				cont++;
				mvprintw(cont, 20, "PRECIO: %i", precio);
				cont++;
				mvprintw(cont, 20, "ES MAGICO? - SI");
				cont++;
				mvprintw(cont, 20, "ATAQUE: %i", ataque);
				cont++;
				mvprintw(cont, 20, "DEFENSA: %i", defensa);
				cont++;
			} else {
				mvprintw(cont, 20, "%i", (i+1));
				mvprintw(cont, 21, ")");
				cont++;
				mvprintw(cont, 20, "TIPO: DEFENSA");
				cont++;
				mvprintw(cont, 20, "NOMBRE: %s", myArray2);
				cont++;
				mvprintw(cont, 20, "PRECIO: %i", precio);
				cont++;
				mvprintw(cont, 20, "ES MAGICO? - NO");
				cont++;
				mvprintw(cont, 20, "ATAQUE: %i", ataque);
				cont++;
				mvprintw(cont, 20, "DEFENSA: %i", defensa);
				cont++;
			}
		}
	}
	mvprintw(cont, 20, "APRETE CUALQUIER TECLA PARA CONTINUAR: ");
	getch();
	cleanScreen();
}

void Zelda::imprimirMonsters() {
	int cont = 5;
	int HP;
	int ataque;
	int dinero;

	mvprintw(cont, 20, "LOS MOUSNTROS QUE EXITEN SON: ");
	cont++;
	for (int i = 0; i < listaMonsters.size(); ++i)
	{
		HP = listaMonsters.at(i) -> getHP();
		ataque = listaMonsters.at(i) -> getAtaque();
		dinero = listaMonsters.at(i) -> getDinero();

		mvprintw(cont, 20, "%i", (i+1));
		mvprintw(cont, 21, ")");
		cont++;
		mvprintw(cont, 20, "HP: %i", HP);
		cont++;
		mvprintw(cont, 20, "ATAQUE: %i", ataque);
		cont++;
		mvprintw(cont, 20, "DINERO: %i", dinero);
		cont++;
	}
	mvprintw(cont, 20, "APRETE CUALQUIER TECLA PARA CONTINUAR: ");
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
	
mvprintw(10,40,"     .---_   _--._---.___ 					\n");
mvprintw(11,40,"    /   _ \\/\\     \\     ''-.				\n");
mvprintw(12,40,"   |   / \\ | \\      '.     '.     .'¯|	\n");
mvprintw(13,40,"   |  / __\\|  '.      '.     '    \\ _|		\n");
mvprintw(14,40,"   | | |_  .-'_'.      .    _.-|  $$		\n");
mvprintw(15,40,"   | | \\U\\ .¯U' '..    _.-' .'  $$		\n");
mvprintw(16,40,"    \\| /¯ /  ¯¯     ' |'   .'|   $$		\n");
mvprintw(17,40,"      \\| '-          '|  .'  |  $$			\n");
mvprintw(18,40,"        \\ --         /.      \\ $$			\n");
mvprintw(19,40,"         \\          .'   __   |$$			\n");
mvprintw(20,40,"          '.   ___.'  | ////¯¯''.._ 		\n");
mvprintw(21,40,"            ¯|¯      _'.//_ ..   ||||		\n");
mvprintw(22,40,"       _ .-¯|\\|----¯¯¯  |\\|¯¯|---||||		\n");
mvprintw(23,40,"    .-¯.'  |  X      .''  \\  |       ''.	\n");
mvprintw(24,40,"   '    ''..      .''__... |/           '.	\n");
mvprintw(25,40,"   | |    .|   .' .-   / \\|              |	\n");
mvprintw(26,40,"  /  '      '.'...'   /  /               |	\n");
mvprintw(27,40," /_ |        '       /  /     |          |	\n");
mvprintw(28,40,"  |¯|                '  '     \\| __.-.___.'	\n");
mvprintw(29,40,"  | |              /  /        |\\         \\\n");
mvprintw(30,40,"  | .             /  /           |        .\n");
mvprintw(31,40,"  | '            '  '            |        '\n");
mvprintw(32,40,"   \\ .        /  /               '        |\n");
mvprintw(33,40,"   /  '      '  '                 |       \\\n");
mvprintw(34,40,"  /   '                           |        |\n");
  	
}

/*template <typename T>
string Zelda::to_string(T pNumber)
{
	ostringstream oOStrStream;
	oOStrStream << pNumber;
	return oOStrStream.str();
}*/


void Zelda::dibujolinkca()
{
mvprintw(10,20,"	                                           ::			\n");
mvprintw(11,20,"                                              ::			\n");
mvprintw(12,20,"                                              ::			\n");
mvprintw(13,20,"                                             ::			\n");
mvprintw(14,20,"                                             ::			\n");
mvprintw(15,20,"                              __            ::			\n");
mvprintw(16,20,"   _..-'/-¯¯--/_         ,.--. ''.     |`\\=,.. 		\n");
mvprintw(17,20,"-:--.---''-..  /_          |\\\\_\\..  \\    `-.=._/			\n");
mvprintw(18,20,".-|¯         '.  \\         \\_ \\-`/\\ |    ::`			\n");
mvprintw(19,20,"  /  @  \\      \\  -_   _..--|-\\¯¯``'--.-/_\\				\n");
mvprintw(20,20,"  |   .-'|      \\  \\-'\\_/     ¯/-.|-.\\_\\_/				\n");
mvprintw(21,20,"  \\_./` /        \\_//-''/    .-'						\n");
mvprintw(22,20,"       |           '-/'@====/              _.--.		\n");
mvprintw(23,20,"   __.'             /¯¯'-. \\-'.          _/   /¯'		\n");
mvprintw(24,20,".''____|   /       |'--\\__\\/-._        .'    |			\n");
mvprintw(25,20," \\ \\_. \\  |       _| -/        \\-.__  /     /			\n");
mvprintw(26,20,"  \\___\\ '/   _.  ('-..| /       '_  ''   _.'			\n");
mvprintw(27,20,"        /  .'     ¯¯¯¯ /  ^~    | ``'--''				\n");
mvprintw(28,20,"       (  / ¯```¯¯¯¯¯|-|        |						\n");
mvprintw(29,20,"        \\ \\_.         \\ \\      /  						\n");
mvprintw(30,20,"         \\___\\         '.'.    /							\n");
mvprintw(31,20,"                         /    |							\n");
mvprintw(32,20,"                        /   .'							\n");
mvprintw(33,20,"                       /  .' |							\n");
mvprintw(34,20,"                     .'  / \\  \\							\n");
mvprintw(35,20,"                    /___| /___'							\n");
}

void Zelda::dibujoMounstro() {
	srand(time(NULL));
	int random=rand()% 3 +1;

	if (random==1)
	{
		mvprintw(5,50,"											(								\n");
		mvprintw(6,50,"		                                    )								\n");
		mvprintw(7,50,"		                                   (								\n");
		mvprintw(8,50,"		                                    )								\n");
		mvprintw(9,50,"		                               [^^^^^^^^^]							\n");
		mvprintw(10,50,"		                           $$$$           $$$$						\n");
		mvprintw(11,50,"		                        $$$                   $$$					\n");
		mvprintw(12,50,"		                      $$                         $$					\n");
		mvprintw(13,50,"		                     $      (00)         (00)      $				\n");
		mvprintw(14,50,"		                    $      (0000)       (0000)      $				\n");
		mvprintw(15,50,"		                   $      (000000)     (000000)      $				\n");
		mvprintw(16,50,"		                   $       (0000)       (0000)       $				\n");
		mvprintw(17,50,"		                   $        (00)         (00)        $				\n");
		mvprintw(18,50,"		                   $                                 $				\n");
		mvprintw(19,50,"		                    $                               $				\n");
		mvprintw(20,50,"		                     $                             $				\n");
		mvprintw(21,50,"		                      $$                         $$					\n");
		mvprintw(22,50,"		                        $$$                   $$$					\n");
		mvprintw(23,50,"		                           $$$$           $$$$						\n");
		mvprintw(24,50,"		                               $$$$$$$$$$$							\n");
		mvprintw(25,50,"		                               $         $							\n");
		mvprintw(26,50,"		                           $$$$$         $$$$$						\n");
		mvprintw(27,50,"		                          $$$$$$         $$$$$$						\n");
	}
	if (random==2)
	{
		mvprintw(10,30,"			                        .-****-.				\n");
		mvprintw(11,30,"	                               / _   _ \\			\n");
		mvprintw(12,30,"	           _..._              | (') (') |			\n");
		mvprintw(13,30,"	         .'_   _'.       _.-._| ._____, |_.-._  	\n");
		mvprintw(14,30,"	        / (.) (.) \\     (== |-|    `-`  |-| ==)		\n");
		mvprintw(15,30,"	   _.-._| ,_____. |_.-._ ``  \\    M    /  			\n");
		mvprintw(16,30,"	  *(== |-\\    '-'  /-| ==)      '._____.'			\n");
		mvprintw(17,30,"	        '.__M__.'              //   \\				\n");
		mvprintw(18,30,"	        __//   \\__            _\\   //_ 			\n");
		mvprintw(19,30,"	       (___)   (___)          (___) (___)			\n");
	}
	if (random==3)
	{
		mvprintw(10,40,"		         	 HHH+          		\n");
		mvprintw(11,40,"               +H+;;;H   +H+   		\n");
		mvprintw(12,40,"              +H+;;  ;H H+;;+  		\n");
		mvprintw(13,40,"         +HHHH+;;;;; ;HH+;  H  		\n");
		mvprintw(14,40,"       +H++;;;;;;;;;;;;++;  ;+ 		\n");
		mvprintw(15,40,"       H+;;;;;;;;;;;;;;;;;; +H 		\n");
		mvprintw(16,40,"      +++;;;;;;;;;;H;;;;;;;;+H 		\n");
		mvprintw(17,40,"      H+;;;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(18,40,"   +HH+;;;;;;;;;;;;;;;;;;;;;++ 		\n");
		mvprintw(19,40," HH;;;;;;;;;;H;;;;;;+HH;;;;+H  		\n");
		mvprintw(20,40,"++;  ;;;;;;;;;;;;+HH;;;;;;;+H  		\n");
		mvprintw(21,40,"H+; ;;;;;;;;;;;+H;;;;;;;;;;+H  		\n");
		mvprintw(22,40,"H++;;;;;;;;;;H+;;;;;;;;;;;;+H  		\n");
		mvprintw(23,40," H++;;;;;;;;H;;;;;;;;;;;;;;++  		\n");
		mvprintw(24,40," +H+++;;;;;;;;;;;;;;;;;;;;;+;+ 		\n");
		mvprintw(25,40,"  H++++;;;;;;;;;;;;;;;;;;;;;;H+		\n");
		mvprintw(26,40,"   H+++;;; ;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(27,40,"   +H++;;;;;  ;;;;;;;;;;;;;;;HH 		\n");
		mvprintw(28,40,"   H++;;;;;    ;;;;;;;;;;;;;+H 		\n");
		mvprintw(29,40,"   H+;;;;;;    ;;;;;;;;;+++HH  		\n");
		mvprintw(30,40,"  +++;;;;;;;  ;;;;;;;;++++H    		\n");
		mvprintw(31,40,"  H+;;;;;;;;;;;;;;;;;++HHH     		\n");
		mvprintw(32,40,"  H++;;;;;;;;+++;;;;;+H        		\n");
		mvprintw(33,40,"  H++;;;;;;;++++++;;;+H        		\n");
		mvprintw(34,40,"  +++++;;;++++HHH+++HH         		\n");
		mvprintw(35,40,"   H+++++++HH+  +HH+           		\n");
		mvprintw(36,40,"   +H++++H+                    		\n");
		mvprintw(37,40,"     +HH+							\n");
	}
	
}


void Zelda::dibujoreinotierra()
{


	mvprintw(10,40,"                                  |>>>													\n");
	mvprintw(11,40,"                                  |														\n");
	mvprintw(12,40,"                    |>>>      _  _|_  _         |>>>										\n");
	mvprintw(13,40,"                    |        |;| |;| |;|        |										\n");
	mvprintw(14,40,"                _  _|_  _    \\.    .  /    _  _|_  __ 									\n");
	mvprintw(15,40,"               |;|_|;|_|;|    \\:. ,  /    |;|_|;|_|;|									\n");
	mvprintw(16,40,"                \\..      /    ||;   . |    \\.    .  /									\n");
	mvprintw(17,40,"                 \\.  ,  /     ||:  .  |     \\:  .  /									\n");
	mvprintw(18,40,"                 ||:   |_   _ ||_ . _ | _   _||:   |										\n");
	mvprintw(19,40,"                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |										\n");
	mvprintw(20,40,"                 ||:   ||.    .     .      . ||:  .|										\n");
	mvprintw(21,40,"                 ||: . || .     . .   .  ,   ||:   |       \\,/							\n");
	mvprintw(22,40,"                 ||:   ||:  ,  _______   .   ||: , |            /`\\						\n");
	mvprintw(23,40,"                 ||:   || .   /+++++++\\    . ||:   |										\n");
	mvprintw(24,40,"                 ||:   ||.    |+++++++| .    ||: . |										\n");
	mvprintw(25,40,"              __ ||: . ||: ,  |+++++++|.  . _||_   |										\n");
	mvprintw(26,40,"     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___ 					\n");
	mvprintw(27,40,"-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~			\n");
}

void Zelda::dibujocofrenormal()
{
	mvprintw(15,40,"	                _.--.							\n");
	mvprintw(16,40,"                        _.-'_:-'||					\n");
	mvprintw(17,40,"                    _.-'_.-::::'||					\n");
	mvprintw(18,40,"               _.-:'_.-::::::'  ||					\n");
	mvprintw(19,40,"             .'`-.-:::::::'     ||					\n");
	mvprintw(20,40,"            /.'`;|:::::::'      ||_ 				\n");
	mvprintw(21,40,"           ||   ||::::::'     _.;._'-._ 			\n");
	mvprintw(22,40,"           ||   ||:::::'  _.-!oo @.!-._'-.			\n");	
	mvprintw(23,40,"           \'.  ||:::::.-!()oo @!()@.-'_.|			\n");
	mvprintw(24,40,"            '.'-;|:.-'.&$@.& ()$%-'o.'\\U||			\n");
	mvprintw(25,40,"              `>'-.!@*()@'@_*-'_.-o _.|'||			\n");
	mvprintw(26,40,"               ||-._'-.@.-'_.-' _.-o  |'||			\n");
	mvprintw(27,40,"               ||=[ '-._.-\\U/.-'    o |'||			\n");
	mvprintw(28,40,"               || '-.]=|| |'|      o  |'||			\n");
	mvprintw(29,40,"               ||      || |'|        _| ';			\n");
	mvprintw(30,40,"               ||      || |'|    _.-'_.-'			\n");
	mvprintw(31,40,"               |'-._   || |'|_.-'_.-'				\n");
	mvprintw(32,40,"                '-._'-.|| |' `_.-'					\n");
	mvprintw(33,40,"                    '-.||_/.-'						\n");
}

void Zelda::dibujoreinoagua()
{

	mvprintw(10,40,"            ^^                   @@@@@@@@@									\n");
	mvprintw(11,40,"       ^^       ^^            @@@@@@@@@@@@@@@								\n");
	mvprintw(12,40,"                            @@@@@@@@@@@@@@@@@@              ^^				\n");
	mvprintw(13,40,"                           @@@@@@@@@@@@@@@@@@@@								\n");
	mvprintw(14,40," ~~~~ ~~ ~~~~~ ~~~~~~~~ ~~ &&&&&&&&&&&&&&&&&&&& ~~~~~~~ ~~~~~~~~~~~ ~~~		\n");
	mvprintw(15,40," ~         ~~   ~  ~       ~~~~~~~~~~~~~~~~~~~~ ~       ~~     ~~ ~			\n");
	mvprintw(16,40,"   ~      ~~      ~~ ~~ ~~  ~~~~~~~~~~~~~ ~~~~  ~     ~~~    ~ ~~~  ~ ~~	\n");
	mvprintw(17,40,"   ~  ~~     ~         ~      ~~~~~~  ~~ ~~~       ~~ ~ ~~  ~~ ~			\n");
	mvprintw(18,40," ~  ~       ~ ~      ~           ~~ ~~~~~~  ~      ~~  ~             ~~		\n");
	mvprintw(19,40,"       ~             ~        ~      ~      ~~   ~             ~			\n");

}

void Zelda::dibujoreinonutral()
{

	mvprintw(12,70,"                                   -;'  -.										\n");
	mvprintw(13,70,"            ``                      `.   `.										\n");
	mvprintw(14,70,"                                      ;    `									\n");
	mvprintw(15,70,"             `;                  -          ;         -.        ;`				\n");
	mvprintw(16,70,"               `-  `.         .'`  .-'             .--`  ;     ;				\n");
	mvprintw(17,70,"                ;    `-.   ;    `-'             .;`     ;       `.				\n");
	mvprintw(18,70,"                .        ``														\n");
	mvprintw(19,70,"                 `            .--------.             .'							\n");
	mvprintw(20,70,"               ...        .--'``````````'--.        ;.							\n");
	mvprintw(21,70,"              `      . .-' .``          ``. '-. .      `.						\n");
	mvprintw(22,70,"            ;-.;  .  .' .`                  `. '.  .    ;						\n");
	mvprintw(23,70,"                .' .' .`                      `. '. '.    .						\n");
	mvprintw(24,70,"  _____/'.-..___________________________ mvn,, ___________________ 				\n");
	mvprintw(25,70,"                               )\\     nMmIEFooPTn								\n");
	mvprintw(26,70,"                              ( (    Li1iiJl1ItTIjp								\n");
	mvprintw(27,70,"                               ) \\  i i_BP_LWmKK`  J  `							\n");
	mvprintw(28,70,"  `                .          /  (   i1 LL 1I`L            .					\n");
	mvprintw(29,70,"               ..             \\   \\  i   X  Y o1								\n");
	mvprintw(30,70,"                          .    )   )  `   l   p      ..							\n");
	mvprintw(30,70,"  ;                           /   (,      l(@) l                ..				\n");
	mvprintw(31,70,"    q      ` .  '            (     \\.     i    p   R          .;				\n");
	mvprintw(32,70,"     \\  t            ;        )     \\`   j,.. ,.q,/Pqoj          `				\n");
	mvprintw(33,70,"      \\/            `       ./       \\`;     `'     `          ..				\n");
	mvprintw(34,70,"    '-     \\;            -'.'    ;    \\ `                     `. `				\n");
	mvprintw(35,70,"  .--.`.; ,-.. ,.-, ;' `.-'       `    `.'.   .--.""-._        .;				\n");
	mvprintw(36,70,"      `............---""     ;_.         )   (  '=    /         `-				\n");
	mvprintw(37,70,"   ~                                    /     `------'     .					\n");
	mvprintw(38,70,"                   ~                  ,'  \\|//            `'					\n");
	mvprintw(39,70,"                  ~           ~       ; `. ""                   ..				\n");
	mvprintw(40,70,"                                       `.  )     \"       .--""""				\n");


}

void Zelda::dibujoneutral2()
{
mvprintw(20,1,"	           ,-_                  (`  ).				");
mvprintw(21,1,"                      |-_'-,              (     ).	");
mvprintw(22,1,"                      |-_'-'           _(        '`.	");
mvprintw(23,1,"             _        |-_'/        .=(`(      .     )");
mvprintw(24,1,"            /;-,_     |-_'        (     (.__.:-`-_.'	");
mvprintw(25,1,"           /-.-;,-,___|'          `(       ) )		");
mvprintw(26,1,"          /;-;-;-;_;_/|\\_ _ _ _ _   ` __.:'   )		");
mvprintw(27,1,"             x_( __`|_P_|`-;-;-;,|        `--'		");
mvprintw(28,1,"             |\\ \\    _||   `-;-;-'				");
mvprintw(29,1,"             | \\`   -_|.      '-'	");
mvprintw(30,1,"             | /   /-_| `			");
mvprintw(31,1,"             |/   ,'-_|  \\				");
mvprintw(32,1,"             /____|'-_|___\\			");
mvprintw(33,1,"      _..,____]__|_\\-_'|_[___,..______ 	");
mvprintw(34,1,"     '                          ``'--,..,.   	");

}