#ifndef FACTORIAL_H_INCLUDED
#define FACTORIAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#endif // FACTORIAL1_H_INCLUDED

/** \brief Calcula el factorial de un entero
 *
 * \param a a calcular el factorial
 * \return factorial de a
 *
 */


int Factorial(int a)
{
    int Resultado;
    int NumF1=1;


    for(int X=1; X<=a; X++)
    {
        NumF1=NumF1*X;
    }

    Resultado=NumF1;

    return Resultado;
}
