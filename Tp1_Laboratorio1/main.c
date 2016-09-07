#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"
int menu(float op1,float op2,int ban1,int ban2);
int validarOpcion(char mensaje[]);
float validarOperando(char mensaje[]);

int main()
{
    float op1;
    float op2;
    /**char opcion='s';
    opcion=tolower(opcion);*/
    int opcion;
    int ban1=0;
    int ban2=0;
    float resultado;
do{
switch(menu(op1,op2,ban1,ban2))
{
    case 1:/**Carga el Primer operador y lo valida*/
        system("cls");
        op1=validarOperando("Ingrese El Operando....:");
        ban1=1;
        break;
    case 2:/**Carga el Segundo operador y lo valida*/
        system("cls");
        op2=validarOperando("Ingrese El Operando....:");
        ban2=1;
        break;
    case 3:/**suma*/
        if(ban1==1&&ban2==1)
        {
           resultado= Suma(op1,op2);
           printf("\n\nLa suma de %.2f + %.2f = %.2f\n",op1,op2,resultado);
           system("pause");
        }
        else
        {
           printf("\nPara realizar la operacion primero tiene que cargar los 2 operandos.\n");
            system("pause");
        }
        break;
    case 4:/**Resta*/
          if(ban1==1&&ban2==1)
        {
           resultado= Resta(op1,op2);
           printf("\n\nLa Resta de %.2f - %.2f = %.2f\n",op1,op2,resultado);
           system("pause");
        }
        else
        {
           printf("\nPara realizar la operacion primero tiene que cargar los 2 operandos.\n");
            system("pause");
        }
        break;
    case 5:/**Divide*/
          if(ban1==1&&ban2==1)
        {
           resultado= Division(op1,op2);
           printf("\n\nLa Division de %.2f / %.2f = %.2f\n",op1,op2,resultado);
           system("pause");
        }
        else
        {
           printf("\nPara realizar la operacion primero tiene que cargar los 2 operandos.\n");
            system("pause");
        }
        break;
    case 6:/**Multiplicacion*/
          if(ban1==1&&ban2==1)
        {
           resultado= Multiplicar(op1,op2);
           printf("\n\nLa Multiplicacion de %.2f * %.2f = %.2f\n",op1,op2,resultado);
           system("pause");
        }
        else
        {
           printf("\nPara realizar la operacion primero tiene que cargar los 2 operandos.\n");
            system("pause");
        }
        break;
    case 7:/**Factorial del Primer operador*/
          if(ban1==1&&ban2==1)
        {
           resultado= Factorial(op1);
           printf("\n\nEl Factorial de %.2f = %.2f\n",op1,resultado);
           system("pause");
        }
        else
        {
           printf("\nPara realizar la operacion primero tiene que cargar el operando.\n");
            system("pause");
        }
        break;
    case 8:/**todas las operciones*/
          if(ban1==1&&ban2==1)
    {
        while(op2<=0){
        printf("Error. El 2do operando tiene que ser Mayor a 0 para realizar la division.\n");
        op2=validarOperando("Ingrese El Operando....:");
        }
        Todaslasoperaciones(op1,op2);
        system("pause");
        }
        else
    {
        printf("\nPara realizar la operacion primero tiene que cargar los 2 operandos.\n");
        system("pause");
    }
    break;
    case 9:/**salir*/
       /** printf("Salir....:?");
        fflush(stdin);
        scanf("%c",&opcion);*/
        opcion=9;
        break;
}
}while(opcion!=9);
return menu(op1,op2,ban1,ban2);
}




int menu(float op1,float op2,int ban1,int ban2)
{
    int validar;
            system("cls");
            printf("¡¡¡¡Bienvenido al menu de opciones de la calculadora!!!!\n");
            printf("Elija la opcion deseada\n");
            if(ban1==1)
            {
                printf("1)Ingrese el Primer Operando :(A=%.2f)\n",op1);
            }
            else
           {
                printf("1)Ingrese el Primer Operando :(A=x)\n");
           }
           if(ban2==1)
            {
                printf("2)Ingrese el Segundo Operando :(B=%.2f)\n",op2);
            }
           else
            {
                printf("2)Ingrese el Segundo Operando :(B=y)\n");
            }

            printf("3) Calcular la Suma de (A+B):\n");
            printf("4) Calcular la Resta de (A-B):\n");
            printf("5) Calcular la Divicion de (A/B):\n");
            printf("6) Calcular la Multiplicacion de (A*B):\n");
            printf("7)Calcular Factorial de !A:\n");
            printf("8)Calcular Todas las Operaciones:\n");
            printf("9)Para salir!!\n");
             fflush(stdin);
            validar=validarOpcion(" Ingrese Opcion: ");
return validar;
}

int validarOpcion(char mensaje[])
{
    int opcion;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&opcion);
    if(opcion<0 || opcion>9)
    {
        printf("¡¡¡¡¡Error No Eligio ninguna de las opciones dadas...\n");
        opcion=validarOpcion(" Ingrese Opcion: ");
    }
    else
    {
     return opcion;
    }
return opcion;
}

float validarOperando(char mensaje[])
{
    float operando;
    printf("%s",mensaje);
    scanf("%f",&operando);

    while(operando < -999999999 || operando >999999999)
    {
        printf("\nError, ingrese opcion valida.\n");
        scanf("%f", &operando);
    }
    return operando;
}
