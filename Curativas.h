#include "Items.h"
#include <string>

#ifndef CURATIVAS_H
#define CURATIVAS_H

using namespace std;

class Curativas : public Items {

	private:
		int curacion;
		string tipo;

	public:
		Curativas();
		Curativas(Curativas*);
		Curativas(string, int, int);
		void setNum(int);
		int getNum();
		string getTipo();

		//void write(ofstream&);
    	//void read(ifstream&);
};

#endif