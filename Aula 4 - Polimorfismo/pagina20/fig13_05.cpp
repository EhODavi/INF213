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
      "Sue", "Jones", "222-22-2222", 10000, .06 );

   // cria ponteiro de classe b�sica
   CommissionEmployee *commissionEmployeePtr = 0;

   // cria objeto de classe derivada
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

   // cria ponteiro de classe derivada
   BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

   // configura a formata��o de sa�da de ponto flutuante
   cout << fixed << setprecision( 2 );

   //commissionEmployee.print(); cout << endl;
   //basePlusCommissionEmployee.print(); cout << endl;

   commissionEmployeePtr = &basePlusCommissionEmployee;
   //commissionEmployeePtr->print(); cout << endl;
   //cout << commissionEmployeePtr->getBaseSalary() << endl; // o que acontece aqui?

   //static cast converte o tipo em tempo de compilacao (nenhuma verificacao eh feita)
   BasePlusCommissionEmployee * bp = static_cast<BasePlusCommissionEmployee *>(commissionEmployeePtr); //voltando com o ponteiro para a classe derivada..
   cout << bp->getBaseSalary() << endl; //agora funciona...

/*
   // gera sa�da dos objetos commissionEmployee e basePlusCommissionEmployee
   cout << "Print base-class and derived-class objects:\n\n";
   commissionEmployee.print(); // invoca print da classe b�sica
   cout << "\n\n";
   basePlusCommissionEmployee.print(); // invoca print da classe derivada
   
   // aponta o ponteiro de classe b�sica para o objeto de classe b�sica e imprime
   commissionEmployeePtr = &commissionEmployee; // perfeitamente natural        
   cout << "\n\n\nCalling print with base-class pointer to "
      << "\nbase-class object invokes base-class print function:\n\n";
   commissionEmployeePtr->print(); // invoca print da classe b�sica

   // aponta o ponteiro de classe derivada p/ o objeto de classe derivada e imprime
   basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; // natural        
   cout << "\n\n\nCalling print with derived-class pointer to "
      << "\nderived-class object invokes derived-class " 
      << "print function:\n\n";
   basePlusCommissionEmployeePtr->print(); // invoca print da classe derivada

   // aponta ponteiro de classe b�sica para o objeto de classe derivada e imprime
   commissionEmployeePtr = &basePlusCommissionEmployee;                         
   cout << "\n\n\nCalling print with base-class pointer to "
      << "derived-class object\ninvokes base-class print "
      << "function on that derived-class object:\n\n";
   commissionEmployeePtr->print(); // invoca print da classe b�sica
   cout << endl;
*/

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
