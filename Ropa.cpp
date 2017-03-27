#include "Ropa.h"
#include <string>

Ropa::Ropa() {
}

Ropa::Ropa(int pdefensaE) {
	defensaE = pdefensaE;
}

int Ropa::getDefensa() {
	return defensaE;
}

void Ropa::setDefensa(int def) {
	defensaE = def;
}