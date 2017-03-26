#include "Reino.h"
#include <string>

#ifndef TIERRA_H
#define TIERRA_H

using namespace std;

class Tierra : public Reino {

	public:
		Tierra();
		Tierra(string, int);
		string getTipoHabitante();

};

#endif