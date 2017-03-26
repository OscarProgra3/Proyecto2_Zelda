#include <string>

#ifndef ROPA_H
#define ROPA_H

using namespace std;

class Ropa {

	private:
		int defensaE;

	public:
		Ropa();
		Ropa(int);
		void setDefensa(int);
		int getDefensa();
		virtual string getTipoRopa() = 0;

};

#endif