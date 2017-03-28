#include "Monster.h"
#include <string>

#include <stdlib.h> //para el random    /* srand, rand */

Monster::Monster() {
}

Monster::Monster(int pHP, int pAtk, int pDinero) {
	HP = pHP;
	ataque = pAtk;
	dinero = pDinero;
}

int Monster::getHP() {
	return HP;
}

void Monster::setHP(int pHP) {
	HP = pHP;
}

int Monster::getAtaque() {
	return ataque;
}

void Monster::setAtaque(int pAtk) {
	ataque = pAtk;
}

int Monster::getDinero() {
	return dinero;
}

void Monster::setDinero(int pDinero) {
	dinero = pDinero;
}

void Monster::dibujoMounstro() {
	srand(time(NULL));
	int random=rand()% 3 +1;

	if (random==1)
	{
		mvprintw(50,50"											(								\n");
		mvprintw(51,50"		                                    )								\n");
		mvprintw(52,50"		                                   (								\n");
		mvprintw(53,50"		                                    )								\n");
		mvprintw(54,50"		                               [^^^^^^^^^]							\n");
		mvprintw(55,50"		                           $$$$           $$$$						\n");
		mvprintw(56,50"		                        $$$                   $$$					\n");
		mvprintw(57,50"		                      $$                         $$					\n");
		mvprintw(58,50"		                     $      (00)         (00)      $				\n");
		mvprintw(59,50"		                    $      (0000)       (0000)      $				\n");
		mvprintw(60,50"		                   $      (000000)     (000000)      $				\n");
		mvprintw(61,50"		                   $       (0000)       (0000)       $				\n");
		mvprintw(62,50"		                   $        (00)         (00)        $				\n");
		mvprintw(63,50"		                   $                                 $				\n");
		mvprintw(64,50"		                    $                               $				\n");
		mvprintw(65,50"		                     $                             $				\n");
		mvprintw(66,50"		                      $$                         $$					\n");
		mvprintw(67,50"		                        $$$                   $$$					\n");
		mvprintw(68,50"		                           $$$$           $$$$						\n");
		mvprintw(69,50"		                               $$$$$$$$$$$							\n");
		mvprintw(70,50"		                               $         $							\n");
		mvprintw(71,50"		                           $$$$$         $$$$$						\n");
		mvprintw(72,50"		                          $$$$$$         $$$$$$						\n");
	}
	if (random==2)
	{
		mvprintw(50,50"			                        .-""""-.				\n");
		mvprintw(51,50"	                               / _   _ \\			\n");
		mvprintw(52,50"	           _..._              | (') (') |			\n");
		mvprintw(53,50"	         .'_   _'.       _.-._| ._____, |_.-._  	\n");
		mvprintw(54,50"	        / (.) (.) \\     (== |-|    `-`  |-| ==)		\n");
		mvprintw(55,50"	   _.-._| ,_____. |_.-._ `"`  \\    M    /  `"`		\n");
		mvprintw(56,50"	  (== |-\\    '-'  /-| ==)      '._____.'			\n");
		mvprintw(57,50"	   `"`   '.__M__.'   `"`        //   \\				\n");
		mvprintw(58,50"	        __//   \\__            _\\   //_ 			\n");
		mvprintw(59,50"	       (___)   (___)          (___) (___)			\n");
	}
	if (random==3)
	{
		mvprintw(50,50"		         	 HHH+          		\n");
		mvprintw(51,50"               +H+;;;H   +H+   		\n");
		mvprintw(52,50"              +H+;;  ;H H+;;+  		\n");
		mvprintw(53,50"         +HHHH+;;;;; ;HH+;  H  		\n");
		mvprintw(54,50"       +H++;;;;;;;;;;;;++;  ;+ 		\n");
		mvprintw(55,50"       H+;;;;;;;;;;;;;;;;;; +H 		\n");
		mvprintw(56,50"      +++;;;;;;;;;;H;;;;;;;;+H 		\n");
		mvprintw(57,50"      H+;;;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(58,50"   +HH+;;;;;;;;;;;;;;;;;;;;;++ 		\n");
		mvprintw(59,50" HH;;;;;;;;;;H;;;;;;+HH;;;;+H  		\n");
		mvprintw(60,50"++;  ;;;;;;;;;;;;+HH;;;;;;;+H  		\n");
		mvprintw(61,50"H+; ;;;;;;;;;;;+H;;;;;;;;;;+H  		\n");
		mvprintw(62,50"H++;;;;;;;;;;H+;;;;;;;;;;;;+H  		\n");
		mvprintw(63,50" H++;;;;;;;;H;;;;;;;;;;;;;;++  		\n");
		mvprintw(64,50" +H+++;;;;;;;;;;;;;;;;;;;;;+;+ 		\n");
		mvprintw(65,50"  H++++;;;;;;;;;;;;;;;;;;;;;;H+		\n");
		mvprintw(66,50"   H+++;;; ;;;;;;;;;;;;;;;;;;+H 		\n");
		mvprintw(67,50"   +H++;;;;;  ;;;;;;;;;;;;;;;HH 		\n");
		mvprintw(68,50"   H++;;;;;    ;;;;;;;;;;;;;+H 		\n");
		mvprintw(69,50"   H+;;;;;;    ;;;;;;;;;+++HH  		\n");
		mvprintw(70,50"  +++;;;;;;;  ;;;;;;;;++++H    		\n");
		mvprintw(71,50"  H+;;;;;;;;;;;;;;;;;++HHH     		\n");
		mvprintw(72,50"  H++;;;;;;;;+++;;;;;+H        		\n");
		mvprintw(73,50"  H++;;;;;;;++++++;;;+H        		\n");
		mvprintw(74,50"  +++++;;;++++HHH+++HH         		\n");
		mvprintw(75,50"   H+++++++HH+  +HH+           		\n");
		mvprintw(76,50"   +H++++H+                    		\n");
		mvprintw(77,50"     +HH+							\n");
	}
	
}