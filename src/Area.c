#include <stdio.h>

void main ()
{
    int n1,n2,area;
        
    printf("Introduce la base del rect: ");
    scanf("%d",&n1);

    printf("Introduce la altura del rect: ");
    scanf("%d",&n2);

    area=n1*n2;
    printf("La area es:%i",area);
}