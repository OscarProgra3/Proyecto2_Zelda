#include "Armas.h"
#include <string>

#ifndef ARMAATK_H
#define ARMAATK_H

using namespace std;

class ArmaAtk : public Armas {

	public:
		ArmaAtk();
		ArmaAtk(string, int, bool, int, int);
		void setAtaque(int);
		void setDefensa(int);
		int getAtaque();
		int getDefensa();


};

#endif