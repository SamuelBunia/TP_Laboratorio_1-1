#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"

int main()
{
    int option;

    do
    {
        mainMenu();
        printf("\n Selecciones una opcion: ");
        scanf("%d",&option);

        while (option<1 || option>5)
        {
            system("cls");
            mainMenu();
            printf("\n ERROR! ESA NO ES UNA OPCION: ");
            scanf("%d",&option);
        }
        switch(option)
        {
        case 1:
            printf("\nA\n");
            system("pause");
            system("cls");
            break;
        case 2:
            printf("\nB\n");
            system("pause");
            system("cls");
            break;
        case 3:
            printf("\nC\n");
            system("pause");
            system("cls");
            break;
        case 4:
            printf("\nD\n");
            system("pause");
            system("cls");
            break;
        case 5:
            printf("\nUsted eligio la opcion de salir. Hasta luego\n");
            system("pause");
            system("cls");
            break;
        }

    }
    while(option !=5);

        return 0;
}
