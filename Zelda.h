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

#ifndef ZELDA_H
#define ZELDA_H

using namespace std;

class Zelda {

	private:
		vector<Items*> listaItems;
		vector<Armas*> listaArmas;
		vector<Ropa*> listaRopa;
		vector<Monster*> listaMonsters;
		Link* link;
		Mundo* mundo;
		Tienda* tienda;

	public:
		Zelda();
		void run();
		void dibujologo();
		void boardPic();
		void cleanScreen();
		void dibujolink();

};

#endif