/*
*@author    : Sebastian Sanchez   
*@date      : 11.12.2022
*@details   : Formar una escalera con signos alternos
*/

#include <stdio.h>

void generarEsacalera(int signoAlternoEscalera)
{
    for (int i = 1; i <= signoAlternoEscalera; i++)
    {
        for (int j = 1; j <= signoAlternoEscalera; j++)
        {
            if ((j % 2 == 1)&&(i == j))
                printf(("|_+_ "));
            if ((i % 2 == 0) && (i == j))
                printf(("|_-_ "));
            else
                ((i != j));
            printf(("    "));
        }
        printf("\n");
    }
}

int main()
{
    int numeroEscalon = 0;
    printf("Ingrese el numero de escalones: ");
    scanf("%i", &numeroEscalon);

    generarEsacalera(numeroEscalon);

    return 0;
}