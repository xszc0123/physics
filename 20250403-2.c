#include <math.h>
#include <stdio.h>

void main()
{
	const double pi = 3.1415926;

	int x, y;

	printf("x���� �Է��ϼ��� ==> ");
	scanf_s("%d", &x);
	printf("y���� �Է��ϼ��� ==> ");
	scanf_s("%d", &y);

	double r = sqrt(x*x + y*y);
	double theta = atan2(y, x);

	double theta_degrees = theta * 180 / pi;
	printf("%lf, %lf\n", r, theta);
	printf("%lf, %lf\n", r, theta_degrees);
}