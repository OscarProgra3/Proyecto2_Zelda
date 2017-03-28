#include "Boosts.h"
#include <string>

Boosts::Boosts() {
}

Boosts::Boosts(string pNombre, int pPrecio, int pAumento) : Items(pNombre, pPrecio) {
	aumento = pAumento;
	tipo = "Boost";
}

int Boosts::getNum() {
	return aumento;
}

void Boosts::setNum(int pAumento) {
	aumento = pAumento;
}

string Boosts::getTipo() {
	return tipo;
}