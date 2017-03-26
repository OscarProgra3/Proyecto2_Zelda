#include "Items.h"
#include <string>

#ifndef BOOSTS_H
#define BOOSTS_H

using namespace std;

class Boosts : public Items {

	private:
		int aumento;

	public:
		Boosts();
		Boosts(string, int, int);
		void setAumento(int);
		int getAumento();

};

#endif