#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;

  system("color 8e");
        printf("\n         �����������������������������������������������������������ͻ");
		printf("\n         �                   ::  bienvenido ::                       �");
		printf("\n         �����������������������������������������������������������ͼ\n\n");
		                          recuardoportada("BY ALUMNO AGUSTIN MODIA  ");

         system("pause");
         system("cls");

    while(seguir == 's')
    {
        system("color 8e");

        printf("\n\n \n");
        printf("\n         ������������������������������������������������ͻ");
		printf("\n         �        :     MENU DE OPCIONES  ::              �");
		printf("\n         ������������������������������������������������͹");
		printf("\n         �  1- agregar pelicula                           �");
		printf("\n         �  2- Borrar pelicula                            �");
		printf("\n         �  3- Modificar pelicula                         �");
		printf("\n         �  4- Generar pagina web                         �");
	    printf("\n         �  5- salir                                      �");
		printf("\n         ������������������������������������������������ͼ");
		printf("\n");


         printf("\n  Ingrese una de las opciones: ");

        opcion = vM(1, 9);
        printf("\n\n");

        switch(opcion)
        {
            case 1:
                agregar();
                break;
            case 2:
                borrar();
                break;
            case 3:
                modificar();
                break;
            case 4:
                generar();
                break;
            case 5:
                  seguir = 'n';

                   recuadroStr("HASTA LA PROXIMA");




                break;
        }

    }

    return 0;
}
