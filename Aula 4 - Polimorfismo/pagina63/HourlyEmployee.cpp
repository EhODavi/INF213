// Fig. 13.2: HourlyEmployee.cpp
// Defini��es de fun��o membro da classe HourlyEmployee.
#include <iostream>
using std::cout;

#include "HourlyEmployee.h" // Defini��o da classe HourlyEmployee

// construtor
HourlyEmployee::HourlyEmployee( 
   const string &first, const string &last, const string &ssn, 
   double hourlySalary_, double numHours_)
   : Employee( first , last , ssn ), numHours(numHours_), hourlySalary(hourlySalary_)
{

} 

// calcula os rendimentos
double HourlyEmployee::earnings() const
{
   if(numHours<40)
      return numHours*hourlySalary;
   else return 40*hourlySalary + (numHours-40)*hourlySalary*1.5;
} // fim da fun��o earnings

// imprime o objeto HourlyEmployee                           
void HourlyEmployee::print() const                           
{          
   cout << "hourly ";                             
   Employee::print();                        
   cout << "\nhourly salary: " << hourlySalary <<        
         ", hours worked: " << numHours;       
} // fim da fun��o print                                         


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISEN��O DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esfor�os na prepara��o do livro. Esses  *
 * esfor�os incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua efic�cia. Os autores e o editor n�o      *
 * oferecem nenhum tipo de garantia, expl�cita ou implicitamente, com     *
 * refer�ncia a esses programas ou � documenta��o contida nesses livros.  *
 * Os autores e o editor n�o ser�o respons�veis por quaisquer danos,      *
 * acidentais ou conseq�entes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utiliza��o desses programas.               *
 **************************************************************************/
