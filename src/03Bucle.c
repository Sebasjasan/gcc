#include <stdio.h>

int main ()
{
    int numeroSigno=0;

    printf("Ingrese el numero de signos: ");
    scanf("%i", &numeroSigno);

    for ( int j = 0; j < numeroSigno; j++)
    {
        for ( int i = 0; i < numeroSigno; i++) 
            printf("+ ");
        printf("\n");
    }   
    return 0;
}
