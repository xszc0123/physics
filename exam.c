/*
* 
* ����ǥ�踦 ���� ��ǥ��� ��ȯ�ϴ� ���α׷�
* 
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
	// 0. ���� ����
	double x            = 0.0;
	double y            = 0.0;
	double r            = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;

	// 1. x��ǥ �Է�
	printf("x��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &x);

	// 2. y��ǥ �Է�
	printf("y��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &y);

	// 3. r�� ���
	r = sqrt(x * x + y * y);

	// 4. ���� �� ���
	angle_radian = atan2(y, x);

	// 5. ���� ���� radian ������ ���
	angle_degree = angle_radian * 180.0 / 3.14159;

	// 6. ��� �� ���
	printf("�Է� ��ǥ(x,y) ; [%6.2lf, %6.2lf]\n", x, y);
	printf("����ǥ r        = %6.2lf\n", r);
	printf("����ǥ ����     = %6.2lf��\n", angle_degree);
	
	return 0;
}



