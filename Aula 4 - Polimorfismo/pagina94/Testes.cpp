// Fig. 13.5: fig13_05.cpp
// Apontando ponteiros de classe b�sica e classe derivada para objetos de classe 
// b�sica e classe derivada, respectivamente.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Employee.h"

//Note que essas duas funcoes nao precisam conhecer SalariedEmployee, Hourly, etc...
//apenas Employee!! (veja o include acima)
double sumSalaries(Employee *v[], int n) {
   double sum = 0;
   for(int i=0;i<n;i++) {
      sum += v[i]->earnings();
   }
   return sum;
}

void printEmployees(Employee *v[], int n) {
   for(int i=0;i<n;i++) {
      v[i]->print();
      cout << endl << "---------------------" << endl;
   }
}


#include "BasePlusCommissionEmployee.h" 
void aumentaSalarioBasePlus(Employee *v[], int n) {
	for(int i=0;i<n;i++) {
      BasePlusCommissionEmployee *ptr = dynamic_cast<BasePlusCommissionEmployee *>(v[i]);
      if(ptr!=NULL) { //o objeto realmente eh um BasePlusCommissionEmployee...
      	ptr->setBaseSalary(ptr->getBaseSalary()*1.1);
      }
   }
}

#include <typeinfo>
void imprimeNomeClasseObjetos(Employee *v[], int n) {
	for(int i=0;i<n;i++) {
		cout << typeid(*v[i]).name() << endl;
	}
}

// inclui defini��es de classe
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h" 
int main()
{
   // cria objeto de classe b�sica
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 100, .1 );

   // cria objeto de classe derivada
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 100, .1, 300 );

   SalariedEmployee salariedEmployee(
      "John", "Snow", "314-15-9265", 1000 );

   HourlyEmployee hourly(
      "John", "Snow", "314-15-9265", 20,100 );

   const int numPeople = 4;
   Employee * people[numPeople];
   people[0] = &commissionEmployee;
   people[1] = &basePlusCommissionEmployee;
   people[2] = &salariedEmployee;
   people[3] = &hourly;


   cout << "Antes do aumento" << endl;
   printEmployees(people,numPeople);
   cout << "Soma dos salarios: " << sumSalaries(people,numPeople) << endl;

   cout << "\n\nApos o aumento" << endl;
   aumentaSalarioBasePlus(people,numPeople);
   printEmployees(people,numPeople);
   cout << "Soma dos salarios: " << sumSalaries(people,numPeople) << endl;

   cout <<"\n\n Nome da classe dos objetos" << endl;
   imprimeNomeClasseObjetos(people,numPeople);
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
