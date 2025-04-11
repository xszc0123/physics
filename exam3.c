
/*
*
2차원 벡터로 내적을 구하는 프로그램
*
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	// 0. 변수 선언
	double x1, y1 = 0.0;
	double x2, y2 = 0.0;
	double z1, z2 = 0.0;
	double sum_x, sum_y, sum_z = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;

	// 1. 첫 번째 벡터 입력 받기
	printf("x1좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &x1);
	printf("y1좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &y1);
	printf("z1좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &z1);

	// 2. 두 번째 벡터 입력 받기
	printf("x2좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &x2);
	printf("y2좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &y2);
	printf("z2좌표를 실수로 입력하세요 = ");
	scanf_s("%lf", &z2);

	// 3. 벡터의 합을 계산한다.
	sum_x = x1 + x2;
	sum_y = y1 + y2;
	sum_z = z1 + z2;

	// 4. 각도 값 계산
	angle_radian = atan2(sum_y, sum_x);

	// 5. 각도 값을 radian 값으로 계산
	angle_degree = angle_radian * 180.0 / 3.14159;

	// 6. 벡터의 내적을 계산한다.
	dot_product = abs(sum_x) * abs(sum_y) * cos(angle_degree);

	// 7. 벡터의 외적을 계산한다.
	cross_product = abs(sum_x) * abs(sum_y) * sin(angle_degree);

	// 8. 결과 값 출력
	printf("벡터의 내적: = %6.lf\n", dot_product);
	printf("벡터의 외적: = %6.lf\n", cross_product);

	return 0;
}