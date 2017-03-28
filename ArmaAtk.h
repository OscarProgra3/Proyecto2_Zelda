#include "Armas.h"
#include <string>

#ifndef ARMAATK_H
#define ARMAATK_H

using namespace std;

class ArmaAtk : public Armas {

	private:
		string tipo;

	public:
		ArmaAtk();
		ArmaAtk(string, int, bool, int, int);
		void setAtaque(int);
		void setDefensa(int);
		int getAtaque();
		int getDefensa();
		string getTipo();


};

#endif