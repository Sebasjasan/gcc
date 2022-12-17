/*
 * @author  : Sebastian Sanchez
 * @date    : 14.12.2022
 * @details : Inicial de un nombre con asteriscos 
*/

#include <stdio.h>

void inicalNombre ()
{
    char logoInicial[7][5] = {
                         {'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                        ,{'*','*','*','*','*'}
                    };
    int fila = sizeof (logoInicial)/sizeof(logoInicial[0]);
    int columna = sizeof (logoInicial[0])/sizeof(logoInicial[0][0]);
  
    for (int fi = 0; fi < fila; fi++)
    {
        for (int ci = 0; ci < columna; ci++)
        {
            if ((fi == 0) || (fi == 3) || (fi == 6) || ((fi == 1 && ci == 0)) || ((fi == 2 && ci == 0)) || ((fi == 4 && ci == 4)) || ((fi == 5 && ci == 4)))
                printf (" %c ", logoInicial[fi][ci]);
            else
                printf ("   ");
        }
        printf("\n");
    
    }
}

void main ()
{
    inicalNombre();  
}