#include <string>


#ifndef COFRE_H
#define COFRE_H

using namespace std;

class Cofre
{
	private:
		int probabilidadepica;

	public:
		Cofre();
		Cofre(int);

		virtual int probabilidadepica()=0;
		
};
#endif



