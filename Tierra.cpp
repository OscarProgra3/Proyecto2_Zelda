#include "Tierra.h"
#include <string>

Tierra::Tierra() {
}

Tierra::Tierra(string pNombre, int pNumH) : Reino(pNombre, pNumH) {
}

string Tierra::getTipoHabitante() {
	return "Hyliano";
}
void Tierra::getdibujoreino()
{


	mvprintw(50,50"                                  |>>>													\n");
	mvprintw(52,50"                                  |														\n");
	mvprintw(53,50"                    |>>>      _  _|_  _         |>>>										\n");
	mvprintw(54,50"                    |        |;| |;| |;|        |										\n");
	mvprintw(55,50"                _  _|_  _    \\.    .  /    _  _|_  __ 									\n");
	mvprintw(56,50"               |;|_|;|_|;|    \\:. ,  /    |;|_|;|_|;|									\n");
	mvprintw(57,50"               \\..      /    ||;   . |    \\.    .  /									\n");
	mvprintw(58,50"                \\.  ,  /     ||:  .  |     \\:  .  /									\n");
	mvprintw(59,50"                 ||:   |_   _ ||_ . _ | _   _||:   |										\n");
	mvprintw(60,50"                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |										\n");
	mvprintw(61,50"                 ||:   ||.    .     .      . ||:  .|										\n");
	mvprintw(62,50"                 ||: . || .     . .   .  ,   ||:   |       \\,/							\n");
	mvprintw(63,50"                 ||:   ||:  ,  _______   .   ||: , |            /`\\						\n");
	mvprintw(64,50"                 ||:   || .   /+++++++\\    . ||:   |										\n");
	mvprintw(65,50"                 ||:   ||.    |+++++++| .    ||: . |										\n");
	mvprintw(66,50"              __ ||: . ||: ,  |+++++++|.  . _||_   |										\n");
	mvprintw(67,50"     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___ 					\n");
	mvprintw(68,50"-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~			\n");
}