#include <vector>

#ifndef MUNDO_H
#define MUNDO_H

using namespace std;

class Mundo
{
	private:
		vector<Armas*> ListaArmas;
		vector<Items*> ListaItems;		
	public:
		Mundo();
		Mundo(vector<Armas*>,vector<Items*>);
		~Mundo();
	
};
