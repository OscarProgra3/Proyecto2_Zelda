#include "Link.h"

Link::Link() {
}

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

Link::~Link(){
}

string Link::getNombre() {
	return nombre;
}

void Link::setNombre(string tnombre)
{ 
	nombre = tnombre; 
}

void Link::setDinero(int trupias) 
{
	rupias = trupias;
}

int Link::getDinero()
{
	return rupias;
}

void Link::setHP(int tHP) 
{
	HP = tHP; 
} 

int Link::getHP() 
{ 
	return HP;
}

void Link::setAtaque(int tataque) 
{ 
	ataque = tataque; 
}

int Link::getAtaque()
{ 
	return ataque; 
}

void Link::setDefensa(int tdefensa) 
{ 
	defensa = tdefensa;
} 

int Link::getDefensa() 
{ 
	return defensa; 
}

void Link::setListaRopa(vector<Ropa*> tListaRopa) 
{ 
	ListaRopa = tListaRopa; 
} 

vector<Ropa*> Link::getListaRopa() 
{ 
	return ListaRopa; 
}

void Link::setListaArmas(vector<Armas*> tListaArmas) 
{ 
	ListaArmas = tListaArmas; 
} 

vector<Armas*> Link::getListaArmas() 
{ 
	return ListaArmas; 
}

void Link::setListaItems(vector<Items*> tListaItems) 
{ 
	ListaItems = tListaItems; 
} 

vector<Items*> Link::getListaItems() 
{ 
	return ListaItems; 
} 