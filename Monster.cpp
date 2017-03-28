#include "Monster.h"
#include <string>

#include <stdlib.h> //para el random    /* srand, rand */

Monster::Monster() {
}

Monster::Monster(int pHP, int pAtk, int pDinero) {
	HP = pHP;
	ataque = pAtk;
	dinero = pDinero;
}

int Monster::getHP() {
	return HP;
}

void Monster::setHP(int pHP) {
	HP = pHP;
}

int Monster::getAtaque() {
	return ataque;
}

void Monster::setAtaque(int pAtk) {
	ataque = pAtk;
}

int Monster::getDinero() {
	return dinero;
}