#include "Curativas.h"
#include <string>

Curativas::Curativas() {
}

Curativas::Curativas(string pNombre, int pPrecio, int pCuracion) : Items(pNombre, pPrecio) {
	curacion =pCuracion;
}

int Curativas::getCuracion() {
	return curacion;
	

void Curativas::setCuracion(int pCuracion) {
	curacion = pCuracion;
}




//-----------------

void Curativas::write(ofstream& out){
   dynamic_cast<Items*>(this)->write(out);
   out.write(reinterpret_cast<char*>(&curacion),sizeof(curacion))
}

void Curativas::read(ifstream& in){
  in.read(reinterpret_cast<char*>(nombre),sizeof(nombre));
  in.read(reinterpret_cast<char*>(&precio),sizeof(precio));
  in.read(reinterpret_cast<char*> (&curacion),sizeof(curacion));

}