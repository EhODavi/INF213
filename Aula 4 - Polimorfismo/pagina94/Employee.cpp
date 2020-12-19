// Fig. 13.2: Employee.cpp
// Defini��es de fun��o membro da classe Employee.
#include <iostream>
using std::cout;

#include "Employee.h" // Defini��o da classe Employee

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
