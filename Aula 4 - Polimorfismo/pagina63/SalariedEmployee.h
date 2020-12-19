// Fig. 13.1: SalariedEmployee.h
// Classe SalariedEmployee representa um empregado com salario fixo semanal
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // classe string padr�o C++ 
using std::string;

#include "Employee.h"

class SalariedEmployee: public Employee
{
public:
   SalariedEmployee( const string &, const string &, const string &, 
      double = 0.0);

   virtual double earnings() const; // calcula os rendimentos
   virtual void print() const; // imprime o objeto SalariedEmployee
   void setSalary(double);
   double getSalary() const; 
private:
   double salary; // vendas brutas semanais
}; // fim da classe SalariedEmployee

#endif


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
