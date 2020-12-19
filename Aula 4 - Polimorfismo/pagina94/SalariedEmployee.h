// Fig. 13.1: SalariedEmployee.h
// Classe SalariedEmployee representa um empregado com salario fixo semanal
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // classe string padrão C++ 
using std::string;

#include "Employee.h"

class SalariedEmployee: public Employee
{
public:
   SalariedEmployee( const string &, const string &, const string &, 
      double = 0.0);

   virtual double earnings() const; // calcula os rendimentos
   virtual void print() const; // imprime o objeto SalariedEmployee 
private:
   double salary; // vendas brutas semanais
}; // fim da classe SalariedEmployee

#endif


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
