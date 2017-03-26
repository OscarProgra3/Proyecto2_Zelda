#include "Items.h"
#include <string>

Items::Items() {
}

Items::Items(string pNombre, int pPrecio) {
	nombre = pNombre;
	precio = pPrecio;
}

int Items::getPrecio() {
	return precio;
}

void Items::setNumeroH(int pPrecio) {
	precio = pPrecio;
}

string Items::getNombre() {
	return nombre;
}

void Items::setNombre(string pnom) {
	nombre = pnom;
}