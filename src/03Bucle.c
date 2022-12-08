#include <stdio.h>

void generarCuadrado(int signoAlterno)
{
   for ( int i = 0; i < signoAlterno; i++)
    {
        for ( int j = 0; j < signoAlterno; j++) 
        if ((i==0) || (j==0) || (i==signoAlterno-1) || (j==signoAlterno-1))
            if ((i+j) %2==0)
                printf("+ ");
            else 
                printf("- ");
        else 
            printf("  ");
        printf("\n\n");
    }   
}

int main ()
{
    int numeroSigno=0;

    printf("Ingrese el numero de signos: ");
    scanf("%i", &numeroSigno);

    //generarCuadrado(numeroSigno);
    for (int i = 0; i < numeroSigno; i++)
    {   
        if (i%2==0)
        printf("+ ");
        else
        printf("- ");   
        if (i%2==0)
        printf("* "); 
        else
        printf("& ");    
    }
    
    return 0;
}
