#include <string>

#ifndef AGUA_H
#define AGUA_H

using namespace std;

class Agua : public Reino {

	public:
		Agua();
		Agua(string, int);
		string getTipoHabitante();

};

#endif