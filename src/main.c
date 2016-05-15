#include <stdio.h>
#include <math.h>
#include"quadratic.h"

int main ()
{

    float  a, b, c;
    printf("Input a: ");
    scanf("%f", &a);
    printf ("Input b: ");
    scanf("%f", &b);
    printf("Input c: ");
    scanf("%f", &c);
    quadratic_equation (a, b, c);

    getchar();
    getchar();
    return 0;
}

