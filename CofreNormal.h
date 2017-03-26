#include "Cofre.h"

#include <string>

#ifndef COFRENORMAL_H
#define COFRENORMAL_H

using namespace std;

class CofreNormal : public Cofre
	{
	public:
		CofreNormal();
		CofreNormal(int);

		
		string getTipoCrofre();
		int probabilidadepica();

		
};
#endif