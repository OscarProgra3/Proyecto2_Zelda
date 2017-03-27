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

void Items::write(ofstream& out)
{
   out.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
   out.write(reinterpret_cast<char*>(&precio), sizeof(precio));
}

void Items::read(ifstream& in)
{
   in.read(reinterpret_cast<char*>(&nombre),sizeof(nombre));
   in.read(reinterpret_cast<char*>(&precio),sizeof(precio));
}
