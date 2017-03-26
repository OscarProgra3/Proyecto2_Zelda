#include "ArmaAtk.h"
#include <string>

ArmaAtk::ArmaAtk() {
}

ArmaAtk::ArmaAtk(string pNombre, int pPrecio, bool pMagico, int pAtaque, int pDefensa) : Armas(pNombre, pPrecio, pMagico) {
	ataque = pAtaque;
	defensa = pDefensa;
}

int ArmaAtk::getAtaque() {
	return ataque;
}

void ArmaAtk::setAtaque(int pAtk) {
	ataque = pAtk;
}

int ArmaAtk::getDefensa() {
	return defensa;
}

void ArmaAtk::setDefensa(int pDef) {
	defensa = pDef;
}