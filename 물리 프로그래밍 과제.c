/*
*
* 물리 3장 수평으로 던진 공의 운동 프로그래밍
*
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double V0 = 0.0;
	double Vx, Vy;
	double g = 9.8;
	double t = 0.0;
	double H = 0.0;
	double s = 0.0;
	double angle_degree = 0.0;
	double angle_radian = 0.0;

	double Vy_final = 0.0;
	double V_final = 0.0;

	// 초기 속도
	printf("초기 속도를 입력하세요 (m/s) => ");
	scanf_s("%lf", &V0);

	// 각도 값 입력
	printf("각도를 입력하세요 (도 단위) => ");
	scanf_s("%lf", &angle_degree);

	// 각도 값을 라디안으로 변환
	angle_radian = angle_degree * 3.14159 / 180.0;

	// x, y 방향의 초기 속도 
	Vx = V0 * cos(angle_radian);
	printf("x방향의 초기속도 : %.2f \n", Vx);

	Vy = V0 * sin(angle_radian);
	printf("y방향의 초기속도 : %.2f \n", Vy);

	// 최고점 높이
	t = Vy / g;
	printf("최고점에 도달하는 시간 : %.2f 초\n", t);

	//최고점에 도착하는 시간
	H = (Vy * Vy) / (2 * g);
	printf("최고점의 높이 : %.2f m\n", H);

	// 수평으로 이동한 최고 거리 계산 //
	s = Vx * t;
	printf("수평으로 이동한 최고 거리 : %.2f m\n", s);

	//  지면에 닿을때의 Vx, Vy를 구하고 V를 벡터 성분 
	printf("지면에 닿을 때 속도 성분은 다음과 같다:\n");
	printf("Vx = %.2f m/s\n", Vx);
	printf("Vy = %.2f m/s\n", sqrt(2 * g * H)); 
	printf("전체 속도 = %.2f m/s\n",
		sqrt(Vx * Vx + (2 * g * H)));

	return 0;

}