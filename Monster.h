#include <string>

#ifndef MONSTER_H
#define MONSTER_H

using namespace std;

class Monster {

	protected:
		double HP;
		double ataque;
		int dinero;

	public:
		Monster();
		Monster(double, double, int);
		void setHP(double);
		void setAtaque(double);
		void setDinero(int);
		int getDinero();
		double getHP();
		double getAtaque();

		void dibujoMounstro();
};

#endif