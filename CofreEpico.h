#include <string>
#include "Cofre.h"

#ifndef COFREEPICO_H
#define COFREEPICO_H

using namespace std;

class CofreEpico : public Cofre
{

	public:
		CofreEpico(int);

		int probabilidad();
		string getTipoCrofre();
		
	
};
#endif