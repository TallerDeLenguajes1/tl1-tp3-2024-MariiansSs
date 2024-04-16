#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *nombres;
    char *buff;

    for (int i = 0; i < 5; i++)
    {
        buff= (char *) malloc(100*sizeof(char));

        printf("Ingrese su nombre:\n");
        gets(buff);

        nombres = (char *) malloc((strlen(buff)+1)*sizeof(char));

        strcpy(nombres,buff);
    }
    
    


    return 0;
}