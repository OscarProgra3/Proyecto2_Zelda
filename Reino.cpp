#include "Reino.h"
#include <string>

Reino::Reino() {
}

Reino::Reino(string pNombre, int pNumH) {
	nombre = pNombre;
	numeroH = pNumH;
}

int Reino::getNumeroH() {
	return numeroH;
}

void Reino::setNumeroH(int numh) {
	numeroH = numh;
}

string Reino::getNombre() {
	return nombre;
}

void Reino::setNombre(string pnom) {
	nombre = pnom;
}