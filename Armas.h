#include <string>

#ifndef ARMAS_H
#define ARMAS_H

using namespace std;

class Armas {

	protected:
		string nombre;
		int precio;
		bool magico;
		int ataque;
		int defensa;

	public:
		Armas();
		Armas(string, int, bool);
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
		void setMagico(bool);
		bool getMagico();
		virtual void setAtaque(int);
		virtual void setDefensa(int);
		virtual int getAtaque();
		virtual int getDefensa();


};

#endif