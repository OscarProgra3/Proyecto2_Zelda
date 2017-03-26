#include "Verde.h"
#include <string>

Verde::Verde() {
}

Verde::Verde(int pdefensaE) : Ropa(pdefensaE) {
}

string Verde::getTipoVerde() {
	return "Verde";
}