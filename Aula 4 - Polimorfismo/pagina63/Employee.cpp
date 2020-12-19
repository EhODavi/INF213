// Fig. 13.2: Employee.cpp
// Definições de função membro da classe Employee.
#include <iostream>
using std::cout;

#include "Employee.h" // Definição da classe Employee

// construtor
Employee::Employee( 
   const string &first, const string &last, const string &ssn)
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{

} // fim do construtor Employee




// imprime o objeto Employee                           
void Employee::print() const                           
{                                                                
   cout << "employee: "                               
      << firstName << ' ' << lastName                  
      << "\nsocial security number: " << socialSecurityNumber;     
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
