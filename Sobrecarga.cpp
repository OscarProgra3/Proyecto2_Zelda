#include "Sobrecarga.h"

using namespace std;

Sobrecarga::Sobrecarga() {
}

Sobrecarga::Sobrecarga(int pItems, int pMonsters) {
	items = pItems;
	monsters = pMonsters;
}

friend ostream &operator<<( ostream &output, const Sobrecarga &S ) { 
	output << " || Items : " << S.items << " Mounstros : " << S.monsters;
	return output;            
}

friend istream &operator>>( istream  &input, Sobrecarga &S ) { 
	input >> S.items >> S.monsters;
	return input;            
}