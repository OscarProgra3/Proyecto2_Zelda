#include <string>

#ifndef MONSTER_H
#define MONSTER_H

using namespace std;

class Monster {

	protected:
		double HP;
		double ataque;

	public:
		Monster();
		Monster(double, double);
		void setHP(double);
		void setAtaque(double);
		double getHP();
		double getAtaque();

};

#endif