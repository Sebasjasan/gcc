#include <stdio.h>

int main (void)

{
    int i, j, n;
    printf("Escribe el numero de escalones: ");
    scanf("%i",&n);

    for (int a = 1; a < n; a++)
    {
        for (int b = 1; b < a; b++)
            printf("*"," ");
    }
    printf("");
    return 0;
}
