#include <string>

#ifndef COFRE_H
#define COFRE_H

using namespace std;

class Cofre
{
	protected:
		int probabilidadepica;

	public:
		Cofre();
		Cofre(int);

		virtual string getTipoCrofre();
		virtual int probabilidad() = 0;
		
};
#endif