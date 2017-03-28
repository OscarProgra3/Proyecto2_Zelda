#include "Sobrecarga.h"

using namespace std;

Sobrecarga::Sobrecarga() {
}

Sobrecarga::Sobrecarga(int pNum) {
	num = pNum;
}

Sobrecarga* Sobrecarga::operator+(Sobrecarga* num1) {
	Sobrecarga* temp = new Sobrecarga();
	int numT;
	numT = num + num1 -> getNum();
	temp -> setNum(numT);
	return temp;
}

Sobrecarga* Sobrecarga::operator-(Sobrecarga* num1) {
	Sobrecarga* temp = new Sobrecarga();
	int numT;
	numT = num - num1 -> getNum();
	temp -> setNum(numT);
	return temp;
}

int Sobrecarga::getNum() {
	return num;
}

void Sobrecarga::setNum(int pnum) {
	num = pnum;
}