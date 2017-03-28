#include "ArmaDef.h"
#include <string>

ArmaDef::ArmaDef() {
}

ArmaDef::ArmaDef(string pNombre, int pPrecio, bool pMagico, int pAtaque, int pDefensa) : Armas(pNombre, pPrecio, pMagico) {
	ataque = pAtaque;
	defensa = pDefensa;
	tipo = "Defensa";
}

int ArmaDef::getAtaque() {
	return ataque;
}

void ArmaDef::setAtaque(int pAtk) {
	ataque = pAtk;
}

int ArmaDef::getDefensa() {
	return defensa;
}

void ArmaDef::setDefensa(int pDef) {
	defensa = pDef;
}

string ArmaDef::getTipo() {
	return tipo;
}