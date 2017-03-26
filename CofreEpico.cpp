#include "CofreEpico.h"


CofreEpico::CofreEpico(int pprobabilidad) :  Cofre(pprobabilidad)
{

}


int CofreEpico::probabilidadepica()
{
	return 60;
}


string getTipoCrofre()
{
	return "Epico";
}