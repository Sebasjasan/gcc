#include <stdio.h>

void main()
{
    int n1,n2;

    printf("Ingresa primer numero: ");
    scanf("%i",&n1);

    printf("Ingresa segundo numero: ");
    scanf("%i",&n2);

    if(n1>n2)
        printf("El mayor es el primer numero");
    if(n2>n1)
        printf("El mayor es el segundo numero");
    if(n1==n2)
        printf("Son iguales");
}