#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int a, b;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Os numeros sao iguais \n\n");
    }
    else
    {
        if (a > b)
        {
            printf("O primeiro e maior \n\n\n");
        }
        else
        {
            printf("O segundo e maior \n\n\n");
        }
    }

    system("pause");

    return 0;
}
