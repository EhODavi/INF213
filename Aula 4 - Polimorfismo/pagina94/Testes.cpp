// Fig. 13.5: fig13_05.cpp
// Apontando ponteiros de classe básica e classe derivada para objetos de classe 
// básica e classe derivada, respectivamente.
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

// inclui definições de classe
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h" 
int main()
{
   // cria objeto de classe básica
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
