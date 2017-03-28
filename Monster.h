#include <string>

#ifndef MONSTER_H
#define MONSTER_H

using namespace std;

class Monster {

	protected:
		int HP;
		int ataque;
		int dinero;

	public:
		Monster();
		Monster(int, int, int);
		void setHP(int);
		void setAtaque(int);
		void setDinero(int);
		int getDinero();
		int getHP();
		int getAtaque();

		//void dibujoMounstro();
};

#endif