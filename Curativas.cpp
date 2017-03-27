#include "Curativas.h"
#include <string>

Curativas::Curativas() {
}

Curativas::Curativas(string pNombre, int pPrecio, int pCuracion) : Items(pNombre, pPrecio) {
	curacion = pCuracion;
}

int Curativas::getCuracion() {
	return curacion;
}

void Curativas::setCuracion(int pCuracion) {
	curacion = pCuracion;
}