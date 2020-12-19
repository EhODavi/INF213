// Fig. 13.2: CommissionEmployee.cpp
// Defini��es de fun��o membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // Defini��o da classe CommissionEmployee

// construtor
CommissionEmployee::CommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate )
   : Employee( first , last , ssn )
{
   setGrossSales( sales ); // valida e armazena as vendas brutas
   setCommissionRate( rate ); // valida e armazena a taxa de comiss�o
} // fim do construtor CommissionEmployee


// configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales( double sales )
{
   grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // fim da fun��o setGrossSales

// configura a taxa de comiss�o
void CommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // fim da fun��o setCommissionRate


// calcula os rendimentos
double CommissionEmployee::earnings() const
{
   return commissionRate * grossSales;
} // fim da fun��o earnings

// imprime o objeto CommissionEmployee                           
void CommissionEmployee::print() const                           
{    
   cout << "comission ";                                    
   Employee::print();                        
   cout << "\ngross sales: " << grossSales                    
      << "\ncommission rate: " << commissionRate;           
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
