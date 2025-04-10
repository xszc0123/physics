/*
*
* ���� 3�� �������� ���� ���� � ���α׷���
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

	// �ʱ� �ӵ�
	printf("�ʱ� �ӵ��� �Է��ϼ��� (m/s) => ");
	scanf_s("%lf", &V0);

	// ���� �� �Է�
	printf("������ �Է��ϼ��� (�� ����) => ");
	scanf_s("%lf", &angle_degree);

	// ���� ���� �������� ��ȯ
	angle_radian = angle_degree * 3.14159 / 180.0;

	// x, y ������ �ʱ� �ӵ� 
	Vx = V0 * cos(angle_radian);
	printf("x������ �ʱ�ӵ� : %.2f \n", Vx);

	Vy = V0 * sin(angle_radian);
	printf("y������ �ʱ�ӵ� : %.2f \n", Vy);

	// �ְ��� ����
	t = Vy / g;
	printf("�ְ����� �����ϴ� �ð� : %.2f ��\n", t);

	//�ְ����� �����ϴ� �ð�
	H = (Vy * Vy) / (2 * g);
	printf("�ְ����� ���� : %.2f m\n", H);

	// �������� �̵��� �ְ� �Ÿ� ��� //
	s = Vx * t;
	printf("�������� �̵��� �ְ� �Ÿ� : %.2f m\n", s);

	//  ���鿡 �������� Vx, Vy�� ���ϰ� V�� ���� ���� 
	printf("���鿡 ���� �� �ӵ� ������ ������ ����:\n");
	printf("Vx = %.2f m/s\n", Vx);
	printf("Vy = %.2f m/s\n", sqrt(2 * g * H)); 
	printf("��ü �ӵ� = %.2f m/s\n",
		sqrt(Vx * Vx + (2 * g * H)));

	return 0;

}