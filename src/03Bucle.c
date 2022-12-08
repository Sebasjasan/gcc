#include <stdio.h>

int main ()
{
    int numeroSigno=0;

    printf("Ingrese el numero de signos: ");
    scanf("%i", &numeroSigno);

    for ( int i = 0; i < numeroSigno; i++)
    {
        for ( int j = 0; j < numeroSigno; j++) 
        if ((i==0) || (j==0) || (i==numeroSigno-1) || (j==numeroSigno-1))
            if ((i+j) %2==0)
                printf("+ ");
            else 
                printf("- ");
        else 
            printf("  ");
        printf("\n\n");
    }   
    return 0;
}
