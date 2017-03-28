#include "Mundo.h"

Mundo::Mundo()
{
}

Mundo::Mundo(vector<Armas*> plistaarmas,vector<Items*> plistaitems)
{
	ListaArmas=plistaarmas;
	ListaItems=plistaitems;
}

vector<Armas*> Mundo::getListaArmas()
{
	return ListaArmas;
}

void Mundo::setListaArmas(vector<Armas*> tListaArmas)
{
	ListaArmas=tListaArmas;
}	

vector<Items*> Mundo::getListaItems()
{
	return ListaItems;
}

void Mundo::setListaItems(vector<Items*> tListaItems)
{
	ListaItems=tListaItems;
}