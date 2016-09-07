#include <stdio.h>
#include <stdlib.h>
/** \brief Suma, toma los valores del operando 1 y 2 y realiza la suma.
 *
 * \param float op1 Para operando 1
 * \param float op2 Para operando 2
 * \return Retorna la suma de los 2 operandos
 *
 */

float Suma(float op1,float op2)
{
    return op1+op2;
}
/** \brief Resta, toma los valores del operando 1 y 2 y realiza la Resta.
 *
 * \param float op1 Para operando 1
 * \param float op2 Para operando 2
 * \return Retorna la suma de los 2 operandos
 *
 */

float Resta(float op1,float op2)
{
     return op1-op2;
}
/** \brief Division, toma los valores del operando 1 y 2 y realiza la division.
 *
 * \param float op1 para operando 1
 * \param float op2 para operando 2
 * \return retorna la division de los 2 operandos
 *
 */
float Division(float op1,float op2)
{
if(op2<=0)
{
printf("Error. El 2do operando tiene que ser Mayor a 0.\nReingrese: ");
scanf("%f",&op2);
Division(op1,op2);
}
 else {
        return op1/op2;
 }
}
/** \brief Multiplicacion, toma los valores del operando 1 y 2 y realiza la multiplicacion
 *
 * \param float op1 Para operando 1
 * \param float op2 Para operando 2
 * \return Retorna la multiplicacion de los 2 operandos
 *
 */
float Multiplicar(float op1,float op2)
{
    return op1*op2;
}
float Factorial(float op1)
{
    float resultado=1;
    int i;
    if(op1<=0)
    {
       printf("El Primer Operador no puede ser 0 ni numero negativo!!!!\n");
       printf("Ingrece el Operando...:");
       fflush(stdin);
       scanf("%.2f",&op1);
    }
    else
    {
          for(i=1;i<=op1;i++)
        {
            resultado=resultado*i;
        }
    }
    return resultado;
}
float Todaslasoperaciones(float op1,float op2)
{
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factor;
            suma=op1+op2;
            printf("La suma de %.2f + %.2f = %.2f\n",op1,op2,suma);

            resta=op1-op2;
            printf("La resta de %.2f - %.2f = %.2f\n",op1,op2,resta);

            multiplicacion=op1*op2;
            printf("La multiplicacion de %.2f * %.2f = %.2f\n",op1,op2,multiplicacion);

            division=op1/op2;
            printf("La division de %.2f / %.2f = %.2f\n",op1,op2,division);

            factor=Factorial(op1);
            printf("El Factorial de %.2f = %.2f",op1,factor);


}
