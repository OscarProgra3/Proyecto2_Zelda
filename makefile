Main: Main.o Zelda.o Agua.o ArmaAtk.o Armas.o Azul.o Cofre.o Curativas.o Fuego.o ArmaDef.o Boosts.o CofreEpico.o CofreNormal.o Items.o Link.o Monster.o Mundo.o Reino.o Roja.o Ropa.o Sobrecarga.o Tienda.o Tierra.o Verde.o
	g++ Main.o Zelda.o Agua.o ArmaAtk.o Armas.o Azul.o Cofre.o Curativas.o Fuego.o ArmaDef.o Boosts.o CofreEpico.o CofreNormal.o Items.o Link.o Monster.o Mundo.o Reino.o Roja.o Ropa.o Sobrecarga.o Tienda.o Tierra.o Verde.o -lncurses -o Main

Main.o: Main.cpp Zelda.h
	g++ -c Main.cpp

Zelda.o: Zelda.h Zelda.cpp Agua.h ArmaAtk.h Armas.h Azul.h Cofre.h Curativas.h Fuego.h ArmaDef.h Boosts.h CofreEpico.h CofreNormal.h Items.h Link.h Monster.h Mundo.h Reino.h Roja.h Ropa.h Sobrecarga.h Tienda.h Tierra.h Verde.h
	g++ -c Zelda.cpp

Reino.o: Reino.h Reino.cpp
	g++ -c Reino.cpp

Agua.o: Agua.h Agua.cpp Reino.h
	g++ -c Agua.cpp

Fuego.o: Fuego.h Fuego.cpp Reino.h
	g++ -c Fuego.cpp

Tierra.o: Tierra.h Tierra.cpp Reino.h
	g++ -c Tierra.cpp

Armas.o: Armas.h Armas.cpp
	g++ -c Armas.cpp

ArmaAtk.o: ArmaAtk.h ArmaAtk.cpp Armas.h
	g++ -c ArmaAtk.cpp

ArmaDef.o: ArmaDef.h ArmaDef.cpp Armas.h
	g++ -c ArmaDef.cpp

Items.o: Items.h Items.cpp
	g++ -c Items.cpp

Curativas.o: Curativas.h Curativas.cpp Items.h
	g++ -c Curativas.cpp

Boosts.o: Boosts.h Boosts.cpp Items.h
	g++ -c Boosts.cpp

Cofre.o: Cofre.h Cofre.cpp
	g++ -c Cofre.cpp

CofreNormal.o: CofreNormal.h CofreNormal.cpp Cofre.h
	g++ -c CofreNormal.cpp

CofreEpico.o: CofreEpico.h CofreEpico.cpp Cofre.h
	g++ -c CofreEpico.cpp

Ropa.o: Ropa.h Ropa.cpp
	g++ -c Ropa.cpp

Azul.o: Azul.h Azul.cpp Ropa.h
	g++ -c Azul.cpp

Roja.o: Roja.h Roja.cpp Ropa.h
	g++ -c Roja.cpp

Verde.o: Verde.h Verde.cpp Ropa.h
	g++ -c Verde.cpp

Link.o: Link.h Link.cpp Armas.h Items.h Ropa.h
	g++ -c Link.cpp

Monster.o: Monster.h Monster.cpp
	g++ -c Monster.cpp

Mundo.o: Mundo.h Mundo.cpp Armas.h Items.h
	g++ -c Mundo.cpp

Tienda.o: Tienda.h Tienda.cpp Armas.h Items.h
	g++ -c Tienda.cpp

Sobrecarga.o: Sobrecarga.h Sobrecarga.cpp
	g++ -c Sobrecarga.cpp

clean:
	rm -f *.o Main