#include <string>
#include <fstream>

#ifndef ITEMS_H
#define ITEMS_H

using namespace std;

class Items {

	protected:
		string nombre;
		int precio;

	public:
		Items();
		Items(string, int);
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
		virtual void setNum(int) = 0;
		virtual int getNum() = 0;
		virtual string getTipo() = 0;

		//archivos binarios
		//void write(ofstream&);
    	//void read(ifstream&);

};

#endif