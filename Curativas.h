#include "Items.h"
#include <string>

#ifndef CURATIVAS_H
#define CURATIVAS_H

using namespace std;

class Curativas : public Items {

	private:
		int curacion;

	public:
		Curativas();
		Curativas(string, int, int);
		void setCuracion(int);
		int getCuracion();

		void write(ofstream&);
    	void read(ifstream&);
};

#endif