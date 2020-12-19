// Fig. 13.5: fig13_05.cpp
// Apontando ponteiros de classe b�sica e classe derivada para objetos de classe 
// b�sica e classe derivada, respectivamente.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// inclui defini��es de classe
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h" 

int main()
{
   // cria objeto de classe b�sica
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 100, .1 );

   // cria objeto de classe derivada
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 100, .1, 300 );


   //Qual versao da funcao "earnings" sera chamada abaixo? Do tipo do handle
   cout << "Earnings do objeto do tipo commission: " << commissionEmployee.earnings() << endl;
   cout << "Earnings do objeto do tipo bp: " << basePlusCommissionEmployee.earnings() << endl;

   
   //Qual versao da funcao "earnings" sera chamada abaixo? Do tipo do ponteiro
   //O que mudaria se earnings() fosse uma funcao virtual? Chamaria o earnings() do objeto apontado pelo ponteiro
   //O que acontece se earnings for declarado como virtual na classe BasePlusCommission ? (mas nao na comission) O polimorfismo não funcionaria
   CommissionEmployee *basePtr = &commissionEmployee;
   cout << "Earnings do obj. comission apontado por ponteiro comission: " << basePtr->earnings() << endl;

   basePtr = &basePlusCommissionEmployee;
   cout << "Earnings do objeto bp apontado por ponteiro comission: " << basePtr->earnings() << endl;
   
   CommissionEmployee &ref = basePlusCommissionEmployee;
   cout << "Earnings do objeto bp apontado por referencia comission: " << basePtr->earnings() << endl;

   return 0;
} // fim de main


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
