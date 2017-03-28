#include "Curativas.h"
#include <string>

Curativas::Curativas() {
}

Curativas::Curativas(string pNombre, int pPrecio, int pCuracion) : Items(pNombre, pPrecio) {
	curacion = pCuracion;
	tipo = "Curativa";
}

Curativas::Curativas(Curativas* curativa)
{
	curativa=curativa;
}

int Curativas::getNum() {
	return curacion;
}

void Curativas::setNum(int pCuracion) {
	curacion = pCuracion;
}

string Curativas::getTipo() {
	return tipo;
}


//-----------------
/*
void Curativas::write(ofstream& out){
   dynamic_cast<Items*>(this)->write(out);
   out.write(reinterpret_cast<char*>(&curacion),sizeof(curacion));
}

void Curativas::read(ifstream& in){
  in.read(reinterpret_cast<char*>(&nombre),sizeof(nombre));
  in.read(reinterpret_cast<char*>(&precio),sizeof(precio));
  in.read(reinterpret_cast<char*> (&curacion),sizeof(curacion));
}*/