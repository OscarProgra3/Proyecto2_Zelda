#include "Monster.h"
#include <string>

Monster::Monster() {
}

Monster::Monster(double pHP, double pAtk, int pDinero) {
	HP = pHP;
	ataque = pAtk;
	dinero = pDinero;
}

double Monster::getHP() {
	return HP;
}

void Monster::setHP(double pHP) {
	HP = pHP;
}

double Monster::getAtaque() {
	return ataque;
}

void Monster::setAtaque(double pAtk) {
	ataque = pAtk;
}

int Monster::getDinero() {
	return dinero;
}

void Monster::dibujoMounstro() {
	
}