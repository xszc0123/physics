#include <math.h>
#include <stdio.h>

void main()
{
    const double pi = 3.1415926;

    int r, theta;
    double x, y;

    printf("r���� �Է��Ͻÿ� ==> ");
    scanf_s("%d", &r);
    printf("theta ���� �Է��Ͻÿ� ==> ");
    scanf_s("%d", &theta);

    double theta_rad = theta * pi / 180.0;

    x = r * cos(theta_rad);
    y = r * sin(theta_rad);

    printf("������ǥ (x, y): (%lf, %lf)\n", x, y);

}