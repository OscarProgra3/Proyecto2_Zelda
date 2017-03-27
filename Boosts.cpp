#include "Boosts.h"
#include <string>

Boosts::Boosts() {
}

Boosts::Boosts(string pNombre, int pPrecio, int pAumento) : Items(pNombre, pPrecio) {
	aumento = pAumento;
}

int Boosts::getAumento() {
	return aumento;
}

void Boosts::setAumento(int pAumento) {
	aumento = pAumento;
}