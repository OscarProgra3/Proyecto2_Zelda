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

void Items::setPrecio(int pPrecio) {
	precio = pPrecio;
}

string Items::getNombre() {
	return nombre;
}

void Items::setNombre(string pnom) {
	nombre = pnom;
}


int Items::getAumento() {
	return 0;
}

void Items::setAumento(int pAumento) {
}

int Items::getCuracion() {
	return 0;
}

void Items::setCuracion(int pCuracion) {
}

/*void Items::write(ofstream& out)
{
   out.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
   out.write(reinterpret_cast<char*>(&precio), sizeof(precio));
}

void Items::read(ifstream& in)
{
   in.read(reinterpret_cast<char*>(&nombre),sizeof(nombre));
   in.read(reinterpret_cast<char*>(&precio),sizeof(precio));
}
*/