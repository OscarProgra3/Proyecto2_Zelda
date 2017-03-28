#include <vector>
#include <string>

#include "Armas.h"
#include "Items.h"
#include "Ropa.h"

#ifndef LINK_H
#define LINK_H

using namespace std;


class Link
{
	private: 
	string nombre;
	int rupias;
	int HP;
	int ataque;
	int defensa;
	int ropaP; //Ropa puesta

	vector<Ropa*> ListaRopa;
	vector<Armas*> ListaArmas;
	vector<Items*> ListaItems;	


	public:
		Link();
		Link(string,int,int,int,int,int,vector<Ropa*>,vector<Armas*>,vector<Items*>);

		~Link();

		void setNombre(string) ;
		string getNombre();

		void setDinero(int) ;
		int getDinero();

		void setHP(int);
		int getHP();

		void setAtaque(int);
		int getAtaque();

		void setDefensa(int) ; 
		int getDefensa();

		void setRopaP(int) ; 
		int getRopaP();

		void setListaRopa(vector<Ropa*>);
		vector<Ropa*> getListaRopa();

		void setListaArmas(vector<Armas*>); 
		vector<Armas*> getListaArmas();

		void setListaItems(vector<Items*>); 
		vector<Items*> getListaItems();
};

#endif