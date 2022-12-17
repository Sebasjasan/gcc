/**
 * @author  : Sebastian Sanchez
 * @date    : 15.12.2022
 * @details : Juego en donde 4 personajes pasan un rio
*/

#include <stdio.h>

void juegoLobo()
{
    int personajes;
    int nroPersonajes [] = {0, 1, 2, 3, 4};

    printf("El juego consiste en que 4 personajes tienen que cruzar un rio mediante una barca de tan solo dos asientos \n\n");
    printf(" Regresa solo=0 \n Vigilante=1 \n Lobo=2 \n Caperucita=3 \n Uvas=4 \n\n ");
    printf("Tomando en cuenta que uno de los asientos siempre sera ocupado por el vigilante, ademas el lobo se come a la caperucita y la caperucita se como las uvas, en que orden deben de cruzar el rio? \n\n");

    printf("Quien cruza primero: ");
    scanf("%i", &personajes);

    if (personajes != 3)
        printf("PERDISTE");
        printf("\n");
    if (personajes == 3)
        printf("Regresa solo o con alguien?: ");
        scanf("%i", &personajes);
        printf("\n");

    if (personajes != 0 )
        printf("PERDISTE");
    if (personajes == 0)
        printf("Quien cruza segundo: ");
        scanf("%i", &personajes);

    if (personajes != 2)
        printf("PERDISTE");
        printf("\n");
    if (personajes == 2)
        printf("Regresa solo o con alguien: ");
        scanf("%i", &personajes);
        printf("\n");

    if (personajes != 3 )
        printf("PERDISTE");
        printf("\n");
    if (personajes == 3)
        printf("Quien cruza tercero: ");
        scanf("%i", &personajes);
        printf("\n");

    if (personajes != 4)
        printf("PERDISTE");
        printf("\n");
    if (personajes == 4)
        printf("Regresa solo o con alguien: ");
        scanf("%i", &personajes);
        printf("\n");
    
    if (personajes != 0 )
        printf("PERDISTE");
        printf("\n");
    if (personajes == 0)
        printf("Quien es el ultimo en cruzar?: ");
        scanf("%i", &personajes);
        printf("\n");
    
    if (personajes != 3)
        printf("PERDISTE");
        printf("\n");
    if (personajes == 3)
        printf("FELICIDADES CONSEGUSTE QUE TODOS PASEN EL RIO!!!");
        printf("\n");
    
}

void main ()
{
    juegoLobo();
}