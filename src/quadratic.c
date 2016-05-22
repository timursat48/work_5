#include <stdio.h>
#include <math.h>

int quadratic_equation (float a, float b, float c)
{
	float  d;
	float x1 = 0, x2 = 0;
	int roots;

	if (a == 0)
	{ 
		printf("\a\n the equation has no roots ");
		roots=-2;
		return roots;
	}
	else
	{
		d = pow(b, 2) - 4 * a * c;
		printf ("D = %.2f\n",d);
		if (d < 0)
		{
			printf("\a\n The equation has no real roots !");
			roots=-1;
			return roots;
		}
		else if (d == 0)
		{
			x1 = -b / (2 / a);
			if (b == 0 && c == 0) x1 = 0;
			{
				printf(" The equation has one root: x = %.2f", x1);
				return 1,x1;
			}
		}
		else
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			printf (" The equation has two root: \n x1 = %.2f\n x2 = %.2f" , x1, x2);
			return 2;
		}
		return d;
	}	
}

