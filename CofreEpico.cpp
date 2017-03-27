#include "CofreEpico.h"


CofreEpico::CofreEpico(int pprobabilidad) :  Cofre(pprobabilidad)
{

}


int CofreEpico::probabilidad()
{
	return 60;
}


string getTipoCrofre()
{
	return "Epico";
}