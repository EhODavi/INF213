// Fig. 13.2: SalariedEmployee.cpp
// Defini��es de fun��o membro da classe SalariedEmployee.
#include <iostream>
using std::cout;

#include "SalariedEmployee.h" // Defini��o da classe SalariedEmployee

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
} // fim da fun��o earnings

// imprime o objeto SalariedEmployee                           
void SalariedEmployee::print() const                           
{          
   cout << "salaried ";                             
   Employee::print();                        
   cout << "\nsalary: " << salary ;           
} // fim da fun��o print         

void SalariedEmployee::setSalary(double salary) {
   this->salary = salary;
}

double SalariedEmployee::getSalary() const {
   return this->salary;
}


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
