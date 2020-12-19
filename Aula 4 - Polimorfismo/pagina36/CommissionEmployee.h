// Fig. 13.1: CommissionEmployee.h
// Classe CommissionEmployee representa um empregado comissionado.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // classe string padr�o C++ 
using std::string;

class CommissionEmployee
{
public:
   CommissionEmployee( const string &, const string &, const string &, 
      double = 0.0, double = 0.0 );
   

   void setGrossSales( double ); // configura a quantidade de vendas brutas
   void setCommissionRate( double ); // configura a taxa de comiss�o

   double earnings() const; // calcula os rendimentos
   void print() const; // imprime o objeto CommissionEmployee 
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
   double grossSales; // vendas brutas semanais
   double commissionRate; // porcentagem da comiss�o
}; // fim da classe CommissionEmployee

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
