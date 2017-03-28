#include <string>

#ifndef REINO_H
#define REINO_H

using namespace std;

class Reino {

	protected:
		string nombre;
		int numeroH;

	public:
		Reino();
		Reino(string, int);
		void setNombre(string);
		void setNumeroH(int);
		string getNombre();
		int getNumeroH();
		virtual string getTipoHabitante() = 0;
		
};

#endif