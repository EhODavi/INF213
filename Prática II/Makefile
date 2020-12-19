all: Circulo.o Retangulo.o TesteFiguras3.o FigBase.o Segmento.o
	g++ -o main Circulo.o Retangulo.o TesteFiguras3.o FigBase.o Segmento.o

FigBase.o: FigBase.cpp FigBase.h
	g++ -c FigBase.cpp

Circulo.o: Circulo.cpp Circulo.h
	g++ -c Circulo.cpp

Retangulo.o: Retangulo.cpp Retangulo.h
	g++ -c Retangulo.cpp

Segmento.o: Segmento.cpp Segmento.h
	g++ -c Segmento.cpp

TesteFigura3.o: TesteFiguras3.cpp
	g++ -c TesteFiguras3.cpp