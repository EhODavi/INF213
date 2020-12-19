// Fig. 13.2: HourlyEmployee.cpp
// Definições de função membro da classe HourlyEmployee.
#include <iostream>
using std::cout;

#include "HourlyEmployee.h" // Definição da classe HourlyEmployee

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
} // fim da função earnings

// imprime o objeto HourlyEmployee                           
void HourlyEmployee::print() const                           
{          
   cout << "hourly ";                             
   Employee::print();                        
   cout << "\nhourly salary: " << hourlySalary <<        
         ", hours worked: " << numHours;       
} // fim da função print                                         


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISENÇÃO DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esforços na preparação do livro. Esses  *
 * esforços incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua eficácia. Os autores e o editor não      *
 * oferecem nenhum tipo de garantia, explícita ou implicitamente, com     *
 * referência a esses programas ou à documentação contida nesses livros.  *
 * Os autores e o editor não serão responsáveis por quaisquer danos,      *
 * acidentais ou conseqüentes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utilização desses programas.               *
 **************************************************************************/
