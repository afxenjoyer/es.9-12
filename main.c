#include <stdio.h>
#include "mcm.h"

int main(void)
{
    int num1;
    int num2;

    printf("MINIMO COMUNE MULTIPLO\n");
    printf("Inserisci il primo numero\n");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero\n");
    scanf("%d", &num2);

    int mcm = Mcm(num1, num2);
    printf("L'mcm di %d e %d è %d\n", num1, num2, mcm);

    return 0;
}
