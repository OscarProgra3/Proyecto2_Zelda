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
		virtual void setCuracion(int);
		virtual int getCuracion();
		virtual void setAumento(int);
		virtual int getAumento();

		//archivos binarios
		//void write(ofstream&);
    	//void read(ifstream&);

};

#endif