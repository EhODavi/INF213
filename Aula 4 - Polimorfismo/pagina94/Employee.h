// Fig. 13.1: Employee.h
// Classe Employee representa um empregado comissionado.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // classe string padr�o C++ 
using std::string;

class Employee
{
public:
   Employee( const string &, const string &, const string &);
   
   virtual double earnings() const = 0; // calcula os rendimentos --> nao temos informacoes sobre isso nessa classe, mas todos funcionarios possuem rendimento!
   virtual void print() const; // imprime o objeto Employee --> podemos imprimir algumas informacoes nesta classe..
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
}; // fim da classe Employee

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
