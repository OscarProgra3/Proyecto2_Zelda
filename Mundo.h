#include <vector>
#include "Armas.h"
#include "Items.h"

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
		//~Mundo();

		vector<Armas*> getListaArmas();
		void setListaArmas(vector<Armas*>);

		vector<Items*> getListaItems();
		void setListaItems(vector<Items*>);
		
	
};
#endif