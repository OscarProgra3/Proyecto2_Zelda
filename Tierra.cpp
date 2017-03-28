#include "Tierra.h"
#include "ncurses.h"
#include <string>

Tierra::Tierra() {
}

Tierra::Tierra(string pNombre, int pNumH) : Reino(pNombre, pNumH) {
}

string Tierra::getTipoHabitante() {
	return "Hyliano";
}
