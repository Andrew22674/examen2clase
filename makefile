Examen: main.o Figura.o Cuadrado.o Circulo.o Double.o
	g++ main.o Figura.o Cuadrado.o Circulo.o Double.o -o Examen

main.o: main.cpp Figura.h Circulo.h Cuadrado.h
	g++ -c main.cpp

Circulo.o: Figura.h Circulo.h Circulo.cpp
	g++ -c Circulo.cpp

Figura.o: Figura.h Figura.cpp
	g++ -c Figura.cpp

Cuadrado.o: Figura.h Cuadrado.h Cuadrado.cpp
	g++ -c Cuadrado.cpp

Double.o: Double.cpp Double.h
	g++ -c Double.cpp

clean:
	rm *.o Examen
