#include "Fuego.h"
#include <string>

Fuego::Fuego() {
}

Fuego::Fuego(string pNombre, int pNumH) : Reino(pNombre, pNumH) {
}

string Fuego::getTipoHabitante() {
	return "Goron";
}