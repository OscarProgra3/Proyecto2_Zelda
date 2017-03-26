#include "Azul.h"
#include <string>

Azul::Azul() {
}

Azul::Azul(int pdefensaE) : Ropa(pdefensaE) {
}

string Azul::getTipoAzul() {
	return "Azul";
}