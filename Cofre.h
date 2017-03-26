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
		virtual int probabilidadepica()=0;
		
};
#endif



