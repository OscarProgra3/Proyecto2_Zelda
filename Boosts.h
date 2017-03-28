#include "Items.h"
#include <string>

#ifndef BOOSTS_H
#define BOOSTS_H

using namespace std;

class Boosts : public Items {

	private:
		int aumento;
		string tipo;

	public:
		Boosts();
		Boosts(string, int, int);
		string getTipo();
		void setNum(int);
		int getNum();

};

#endif