#include <iostream>
#include <sstream>
#include <string>

#ifndef SOBRECARGA_H
#define SOBRECARGA_H

using namespace std;

class Sobrecarga {

	private:
		int num;

	public:
		Sobrecarga();
		Sobrecarga(int);
		int getNum();
		void setNum(int);
		Sobrecarga* operator+(Sobrecarga*);

		/*friend ostream &operator<<( ostream &output, const Sobrecarga &S ) { 
			output << " || Items : " << S.items << " Mounstros : " << S.monsters;
			return output;            
		}

		friend istream &operator>>( istream  &input, Sobrecarga &S ) { 
			input >> S.items >> S.monsters;
			return input;            
		}*/

};

#endif