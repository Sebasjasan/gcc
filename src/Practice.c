#include <stdio.h>

void main ()
{
    int n1,n2,n3,n4,rta;

    printf("Ingrese un numero: ");
    scanf("%i",&n1);

    printf("Ingrese el segundo numero: ");
    scanf("%i",&n2);

    printf("Ingrese el tercer numero: ");
    scanf("%i",&n3);

    printf("Ingrese el cuerto numero: ");
    scanf("%i",&n4);

    rta=n1+n2+n3+n4;

    printf("La respuesta es %i", rta);
}
{
	int numN = 5;
	int N[numN];
	for (int i = 0; i < numN; i++)
	{
		N [numN] = i*2;
		printf("%i ", N[numN]);
	}

	return 0;
}