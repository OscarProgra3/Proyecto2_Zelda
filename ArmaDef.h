#include "Armas.h"
#include <string>

#ifndef ARMADEF_H
#define ARMADEF_H

using namespace std;

class ArmaDef : public Armas {

	public:
		ArmaDef();
		ArmaDef(string, int, bool, int, int);
		void setAtaque(int);
		void setDefensa(int);
		int getAtaque();
		int getDefensa();


};

#endif