#include "Roja.h"
#include <string>

Roja::Roja() {
}

Roja::Roja(int pdefensaE) : Ropa(pdefensaE) {
}

string Roja::getTipoRoja() {
	return "Roja";
}