#include "Armas.h"
#include <string>

Armas::Armas() {
}

Armas::Armas(string pNombre, int pPrecio, bool pMagico) {
	nombre = pNombre;
	precio = pPrecio;
	magico = pMagico;
	ataque = 0;
	defensa = 0;
}

int Armas::getPrecio() {
	return precio;
}

void Armas::setPrecio(int pPrecio) {
	precio = pPrecio;
}

string Armas::getNombre() {
	return nombre;
}

void Armas::setNombre(string pnom) {
	nombre = pnom;
}

bool Armas::getMagico() {
	return magico;
}

void Armas::setMagico(bool pMagico) {
	magico = pMagico;
}