#include "Link.h"

Link::Link(string pnombre,int prupias,int pHP,int pataque,int pdefensa,vector<Ropa*> pListaRopa,vector<Armas*> pListaArmas,vector<Items*> pListaItems)
{
	nombre=pnombre;
	rupias=prupias;
	HP=pHP;
	ataque=pataque;
	defensa=pdefensa;
	ListaRopa=pListaRopa;
	ListaArmas=pListaArmas;
	ListaItems=pListaItems;

}


void setNombre(string tnombre)
{ 
	this->nombre = tnombre; 
} 
string getNombre() {
	return this->tnombre;
}

void setDinero(int trupias) 
{
	this->rupias = trupias;
} 
int getDinero()
{
	return this->dinero;
}
void setHP(int tHP) 
{
	this->HP = tHP; 
} 
int getHP() 
{ 
	return this->HP;
}

void setAtaque(int tataque) 
{ 
	this->ataque = tataque; 
}
int getAtaque()
{ 
	return this->ataque; 
}

void setDefensa(int tdefensa) 
{ 
	this->defensa = tdefensa;
} 
int getDefensa() 
{ 
	return this->defensa; 
}



void setListaRopa(vector<Ropa*> tListaRopa) 
{ 
	this->ListaRopa = tListaRopa; 
} 
vector<Ropa*> getListaRopa() { return this->ListaRopa; }

void setListaArmas(vector<Armas*> tListaArmas) 
{ 
	this->ListaArmas = tListaArmas; 
} 
vector<Armas*> getListaArmas() 
{ 
	return this->ListaArmas; 
}

void setListaItems(vector<Items*> tListaItems) 
{ 
	this->ListaItems = tListaItems; 
} 
void setListaItems(vector<Items*> ListaItems) 
{ 
	return this->ListaItems; 
} 