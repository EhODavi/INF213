all: Agenda.o TestaAgenda.o Data.o Horario.o
	g++ -o main Agenda.o TestaAgenda.o Data.o Horario.o

Agenda.o: Agenda.cpp Agenda.h
	g++ -c Agenda.cpp

Data.o: Data.cpp Data.h
	g++ -c Data.cpp

Horario.o: Horario.cpp Horario.h
	g++ -c Horario.cpp

TestaAgenda.o: TestaAgenda.cpp
	g++ -c TestaAgenda.cpp