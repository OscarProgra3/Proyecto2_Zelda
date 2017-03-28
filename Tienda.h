#include <vector>
#include "Armas.h"
#include "Items.h"

#ifndef TIENDA_H
#define TIENDA_H

using namespace std;

class Tienda
{
	private:
	vector<Armas*> ListaArmas;
	vector<Items*> ListaItems;	

	public:
		Tienda();
		Tienda(vector<Armas*>,vector<Items*>);
		
		//~Tienda();

		vector<Armas*> getListaArmas();
		void setListaArmas(vector<Armas*>);

		vector<Items*> getListaItems();
		void setListaItems(vector<Items*>);

		
};
#endif