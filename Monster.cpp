#include "Monster.h"
#include <string>

Monster::Monster() {
}

Monster::Monster(double pHP, double pAtk) {
	HP = pHP;
	ataque = pAtk;
}

int Monster::getHP() {
	return HP;
}

void Monster::setHP(double pHP) {
	HP = pHP;
}

string Monster::getAtaque() {
	return ataque;
}

void Monster::setAtaque(double pAtk) {
	ataque = pAtk;
}