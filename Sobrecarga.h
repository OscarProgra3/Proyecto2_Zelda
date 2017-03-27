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

};

#endif