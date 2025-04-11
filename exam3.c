
/*
*
2���� ���ͷ� ������ ���ϴ� ���α׷�
*
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	// 0. ���� ����
	double x1, y1 = 0.0;
	double x2, y2 = 0.0;
	double z1, z2 = 0.0;
	double sum_x, sum_y, sum_z = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;

	// 1. ù ��° ���� �Է� �ޱ�
	printf("x1��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &x1);
	printf("y1��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &y1);
	printf("z1��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &z1);

	// 2. �� ��° ���� �Է� �ޱ�
	printf("x2��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &x2);
	printf("y2��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &y2);
	printf("z2��ǥ�� �Ǽ��� �Է��ϼ��� = ");
	scanf_s("%lf", &z2);

	// 3. ������ ���� ����Ѵ�.
	sum_x = x1 + x2;
	sum_y = y1 + y2;
	sum_z = z1 + z2;

	// 4. ���� �� ���
	angle_radian = atan2(sum_y, sum_x);

	// 5. ���� ���� radian ������ ���
	angle_degree = angle_radian * 180.0 / 3.14159;

	// 6. ������ ������ ����Ѵ�.
	dot_product = abs(sum_x) * abs(sum_y) * cos(angle_degree);

	// 7. ������ ������ ����Ѵ�.
	cross_product = abs(sum_x) * abs(sum_y) * sin(angle_degree);

	// 8. ��� �� ���
	printf("������ ����: = %6.lf\n", dot_product);
	printf("������ ����: = %6.lf\n", cross_product);

	return 0;
}