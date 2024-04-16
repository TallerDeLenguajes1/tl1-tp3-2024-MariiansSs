#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *nombres;
    char **buff;

    buff= (char **) malloc(100*sizeof(char*));

    printf("Ingrese su nombre:\n");
    gets(buff);    

    nombres = (char *) malloc((strlen(buff)+1)*sizeof(char));

    strcpy(nombres,buff);
    
    
    


    return 0;
}