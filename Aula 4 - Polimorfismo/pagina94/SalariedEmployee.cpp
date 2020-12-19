// Fig. 13.2: SalariedEmployee.cpp
// Definições de função membro da classe SalariedEmployee.
#include <iostream>
using std::cout;

#include "SalariedEmployee.h" // Definição da classe SalariedEmployee

// construtor
SalariedEmployee::SalariedEmployee( 
   const string &first, const string &last, const string &ssn, 
   double salary_)
   : Employee( first , last , ssn ), salary(salary_)
{

} // fim do construtor SalariedEmployee


// calcula os rendimentos
double SalariedEmployee::earnings() const
{
   return salary;
} // fim da função earnings

// imprime o objeto SalariedEmployee                           
void SalariedEmployee::print() const                           
{          
   cout << "salaried ";                             
   Employee::print();                        
   cout << "\nsalary: " << salary ;           
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
