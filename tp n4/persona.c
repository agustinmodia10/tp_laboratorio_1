#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include "persona.h"
#include "ArrayList.h"


/** \brief  valida maximo
 *
 * \param min
 * \param max
 * \return val
 *
 */

int vM(int min, int max)
{
    int val;
    scanf("%d",&val);

    while(val < min || val > max)
    {
        printf("\n  ERROR, ingrese valor nuevamente: ");
        scanf("%d", &val);
    }

    return val;

}


int menu()
    {
        int op;

        printf("\n\n**BIENVENIDO AL MENU DE OPCIONES**");
        printf("\n1-Add\n");
        printf("2-Len\n");
        printf("3-Get\n");
        printf("4-Contains\n");
        printf("5-Set\n");
        printf("6-Remove\n");
        printf("7-Clear\n");
        printf("8-Push\n");
        printf("9-IndexOf\n");
        printf("10-IsEmpty\n");
        printf("11-Pop\n");
        printf("12-Mostrar todo el ArrayList\n");
        printf("13-Salir\n\n");
        printf("Ingrese opcion: ");
        scanf("%d",&op);

        return op;
    }

Persona* per_nuevo(int edad, char nombre[],char apellido[], int legajo)
{
    Persona* returnAux = NULL;
    Persona* pPersona = malloc(sizeof(Persona));

    if(pPersona != NULL)
    {
        pPersona->edad = edad;
        strcpy(pPersona->nombre,nombre);
        strcpy(pPersona->apellido,apellido);
        pPersona->legajo = legajo;

        returnAux = pPersona;
    }

    return returnAux;

}

Persona* per_nuevo2()
{
 int edad;
 char nombre[25];
 char apellido[25];
 int legajo;




    Persona* returnAux = NULL;
    Persona* pPersona = malloc(sizeof(Persona));

    printf("ingrese nombre");
    fflush(stdin);
    gets(nombre);
    printf("ingrese apellido");
    fflush(stdin);
    gets(apellido);
    printf("ingrese edad");
    fflush(stdin);
    scanf("%d", &edad);
    printf("ingrese legajo");
    fflush(stdin);
    scanf("%d", &legajo);


    if(pPersona != NULL)
    {
        pPersona->edad = edad;
        strcpy(pPersona->nombre,nombre);
        strcpy(pPersona->apellido,apellido);
        pPersona->legajo = legajo;

        returnAux = pPersona;
    }

    return returnAux;

}

void Mostrar(Persona* p)
{
    printf("Nombre: %s Apellido: %s Edad: %d Legajo: %d\n",p->nombre,p->apellido,p->edad,p->legajo);
}


void Mostrarinicio(Persona* p)
{

    printf("%25s  %15s %15d %15d\n",p->nombre,p->apellido,p->edad,p->legajo);

}

