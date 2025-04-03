#include <math.h>
#include <stdio.h>

void main() 
{     

	const double pi = 3.1415926;

	int x = 30;

	double a = sin(x * pi / 180);
	double b = cos(x * pi / 180);
	double c = tan(x * pi / 180);

	printf("sin(%d * pi/ 180) : %f\n", x, a);
	printf("cos(%d * pi/ 180) : %f\n", x, b);
	printf("tan(%d * pi/ 180) : %f\n", x, c);

}

