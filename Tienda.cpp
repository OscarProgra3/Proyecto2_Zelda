#include "Tienda.h"

Tienda::Tienda(vector<Armas*> plistaarmas,vector<Items*> plistaitems)
{
	ListaArmas = plistaarmas;
	ListaItems = plistaitems;
}

vector<Armas*> Tienda::getListaArmas()
{
	return ListaArmas;
}
void Tienda::setListaArmas(vector<Armas*> tListaArmas)
{
	ListaArmas = tListaArmas;
}	



vector<Items*> Tienda:: getListaItems()
{
	return ListaItems;
}
void Tienda::setListaItems(vector<Items*> tListaItems)
{
	ListaItems = tListaItems;
}