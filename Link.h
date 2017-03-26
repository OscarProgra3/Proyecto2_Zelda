#include <vector>
#include <string>

#include "Armas.h"
#include "Items.h"
#include "Ropa.h"

using namespace std;


class Link
{
	private: 
	string nombre;
	int dinero;
	int HP;
	int ataque;
	int defensa;

	vector<Ropa*> ListaRopa;
	vector<Armas*> ListaArmas;
	vector<Items*> ListaItems;	


	public:
		Link();
		Link(string,int,int,int,int,vector<Ropa*>,vector<Armas*>,vector<Items*>);

		~Link();

		void setNombre(string nombre) ;
		string getNombre();

		void setDinero(int dinero) ;
		int getDinero();

		void setHP(int HP);
		int getHP();

		void setAtaque(int ataque);
		int getAtaque();

		void setDefensa(int idefensa) ; 
		int getDefensa();

		void setListaRopa(vector<Ropa*> ListaRopa);
		vector<Ropa*> getListaRopa();

		void setListaArmas(vector<Armas*> ListaArmas); 
		vector<Armas*> getListaArmas();

		void setListaItems(vector<Items*> ListaItems); 
		vector<Items*> getListaItems() ;
};
#endif