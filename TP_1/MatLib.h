#ifndef MATLIB_H_INCLUDED
#define MATLIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#endif // MATLIB_H_INCLUDED

/** \brief  suma dos numeros enteros
 *
 * \param  Entero1 primer numero a sumar
 * \param  Entero2 segundo numero a sumar
 * \return resultado de la suma entre Entero1 y Entero2
 *
 */

int Suma(int Entero1, int Entero2)
{
    int resultado;
    resultado = Entero1 + Entero2;
    return resultado;
}

/** \brief  resta dos numeros enteros
 *
 * \param  Entero1 es el minuendo
 * \param  Entero2 es el sustraendo
 * \return resultado de la resta entre Entero1 y Entero2
 *
 */

int Resta(int Entero1, int Entero2)
{
    int resultado;
    resultado = Entero1 - Entero2;
    return resultado;
}

/** \brief  multiplica dos numeros enteros
 *
 * \param  Entero1 primer numero a multiplicar
 * \param  Entero2 segundo numero a multiplicar
 * \return resultado de la multiplicacion entre Entero1 y Entero2
 *
 */

int Multiplicacion(int Entero1, int Entero2)
{
    int resultado;
    resultado = Entero1 * Entero2;
    return resultado;
}

/** \brief Divide un entero por otro entero
 *
 * \param a numero a divir
 * \param b numero divisor
 * \return Resultado de la division de Entero1 por Entero2
 *
 */

float  Division(float Entero1, float Entero2)
{
    float resultado;
    resultado = Entero1 / Entero2;
    return resultado;
}

/** \brief Calcula el factorial de un entero
 *
 * \param a numero a calcular el factorial
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
