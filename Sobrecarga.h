#include <iostream>
#include <sstream>
#include <string>

#ifndef SOBRECARGA_H
#define SOBRECARGA_H

using namespace std;

class Sobrecarga {

	private:
		int items;
		int monsters;

	public:
		Sobrecarga();
		Sobrecarga(int, int);

		friend ostream &operator<<( ostream &output, const Sobrecarga &S ) { 
			output << " || Items : " << S.items << " Mounstros : " << S.monsters;
			return output;            
		}

		friend istream &operator>>( istream  &input, Sobrecarga &S ) { 
			input >> S.items >> S.monsters;
			return input;            
		}

};

#endif