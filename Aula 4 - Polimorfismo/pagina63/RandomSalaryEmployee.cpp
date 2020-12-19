#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cout;
#include "RandomSalaryEmployee.h"

RandomSalaryEmployee::RandomSalaryEmployee(const string &first, 
                                           const string &last, 
                                           const string &ssn)
                                           : SalariedEmployee(first, last, ssn) {
    this->setSalary(rand() % 10001);
}

// imprime o objeto RandomSalaryEmployee                           
void RandomSalaryEmployee::print() const                           
{          
   cout << "Random ";                             
   SalariedEmployee::print();                                 
} // fim da fun��o print