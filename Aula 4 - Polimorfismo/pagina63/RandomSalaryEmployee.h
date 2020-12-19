#ifndef RANDOMSALARY_H
#define RANDOMSALARY_H

#include "SalariedEmployee.h"

class RandomSalaryEmployee: public SalariedEmployee {
    public:
        RandomSalaryEmployee(const string &, const string &, const string &);
        virtual void print() const; // imprime o objeto RandomSalaryEmployee
};

#endif