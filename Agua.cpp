#include "Agua.h"
#include <string>

Agua::Agua() {
}

Agua::Agua(string pNombre, int pNumH) : Reino(pNombre, pNumH) {
}

string Agua::getTipoHabitante() {
	return "Zora";
}