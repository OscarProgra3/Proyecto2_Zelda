#include "Ropa.h"
#include <string>

Ropa::Ropa() {
}

Ropa::Ropa(int pdefensaE) {
	defensaE = pdefensaE;
}

int Ropa::getDefensa() {
	return defensa;
}

void Ropa::setDefensa(int def) {
	defensa = def;
}