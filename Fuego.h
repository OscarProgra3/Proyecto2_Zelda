#include <string>

#ifndef FUEGO_H
#define FUEGO_H

using namespace std;

class Fuego : public Reino {

	public:
		Fuego();
		Fuego(string, int);
		string getTipoHabitante();

};

#endif