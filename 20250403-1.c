#include <math.h>
#include <stdio.h>

void main()
{

	int x, y;

	printf("x���� �Է��ϼ��� ==> ")
		scanf_s("%d", &x);
	printf("y���� �Է��ϼ��� ==> ")
		scanf_s("%d", &y);

	double r = math.sqrt(x * *2 + y * *2);
	double theta = math.atan2(y, x);

	printf(r, theta);
}


