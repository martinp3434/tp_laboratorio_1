#include <stdio.h>
#include <stdlib.h>
#include "MatLib.h"

int main()
{
    int Num1;
    int Num2;
    int RtaSuma;
    int RtaResta;
    int RtaMultiplicacion;
    float RtaDivision;
    int RtaFactorial1;
    int RtaFactorial2;
    char Respuesta;
//Declaracion de variables

Respuesta='s';

while(Respuesta=='s')
    {
        system ("cls");
        printf("Ingresar el primer operando: ");
        scanf("%d", &Num1);
        system ("cls");
        printf("El primer operando es: %d\n", Num1);
//Ingreso del primer operando

        printf("Ingrese el segundo operando: ");
        scanf("%d", &Num2);
        system ("cls");
//Ingreso del segundo operando

        printf("El primer operando es: %d\n", Num1);
        printf("El segundo operando es: %d\n\n", Num2);
//Muestro los dos operandos

        RtaSuma = Suma(Num1, Num2);
        printf("El resultado de %d+%d es: %d \n", Num1,Num2,RtaSuma);
//Llamada de funcion suma y muesro el resultado

        RtaResta = Resta(Num1, Num2);
        printf("El resultado de %d-%d es: %d \n", Num1,Num2,RtaResta);
//Llamada de funcion Resta y muestro el resultado

        RtaMultiplicacion = Multiplicacion(Num1, Num2);
        printf("El resultado de %d*%d es: %d \n", Num1,Num2,RtaMultiplicacion);
//Llamada de funcion multiplicacion y muestro los resultados

        if(Num2==0)
        {
           printf("No es posible dividir por cero\n");
        }
        else
        {
            RtaDivision = Division(Num1, Num2);
            printf("El resultado de %d/%d es: %.3f \n",Num1,Num2, RtaDivision);
        }

//Pregunto si el segundo operando es igual a 0, llamo a la funcion division y muestro los resultados

        if(Num1<0 && Num2<0)
        {
            printf("No es posible obtener el factorial de un numero menor a 0\n\n");
        }
        else
        {
            if(Num1>-1 && Num2<0)
            {
               RtaFactorial1 = Factorial(Num1);
               printf("El fctorial de %d es: %d\n", Num1,RtaFactorial1);
               printf("No es posible calcular el factorial de %d porque es menor a 1\n\n", Num2);
            }
            else
            {
                if(Num1<0 && Num2>-1)
                {
                    RtaFactorial2 = Factorial(Num2);
                    printf("El fctorial de %d es: %d\n",Num2, RtaFactorial2);
                    printf("No es posible calcular el factorial de %d porque es menor a 1\n\n",Num1);
                }
                else
                {
                    RtaFactorial1 = Factorial(Num1);
                    RtaFactorial2 = Factorial(Num2);
                    printf("El fctorial de %d es: %d y el factorial de %d es: %d \n\n",Num1,RtaFactorial1,Num2,RtaFactorial2);
                }
            }
        }
//Pregunto si algun operando es menor a 1, llamo a la funcion factorial y muestro los resultados

        printf("Ingrese 's' para continuar haciendo operacones: ");
        scanf("%s", &Respuesta);
//Pregunto al usuaio si desea continuar;
    }
return 0;

}
