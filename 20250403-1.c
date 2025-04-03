#include <math.h>
#include <stdio.h>

void main()
{

	int x, y;

	printf("x값을 입력하세요 ==> ")
		scanf_s("%d", &x);
	printf("y값을 입력하세요 ==> ")
		scanf_s("%d", &y);

	double r = math.sqrt(x * *2 + y * *2);
	double theta = math.atan2(y, x);

	printf(r, theta);
}


