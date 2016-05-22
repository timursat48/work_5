#include <stdio.h>
#include <math.h>
#include"quadratic.h"

int main ()
{

    double  a, b, c, x1, x2, d;
    printf("Input a: ");
    scanf("%lf", &a);
    printf ("Input b: ");
    scanf("%lf", &b);
    printf("Input c: ");
    scanf("%lf", &c);
    quadratic_equation (a, b, c, &x1, &x2, &d);

    getchar();
    getchar();
    return 0;
}

