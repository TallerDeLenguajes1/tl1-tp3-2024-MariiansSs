#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char **nombre;

    nombre = (char *)malloc(sizeof(char)* 5); // Reservo 5 filas por los 5 nombres

    for (int i = 0; i < 5; i++)
    {
        nombre[i] = (char**)malloc(sizeof(char)* 50); // Reservo una aproximacion de cantidad de caracteres por cada nombre
        printf("Ingrese su nombre \n");
        scanf("%s", nombre[i]);
    }

    for (int i = 0; i < 5; i++)
    {
         printf("El nombre %d es: %s \n", i,nombre[i]);
    }
    
    return 0;
}

