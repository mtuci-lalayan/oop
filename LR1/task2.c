#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float func(float x, float y)
{
	float f;
	f = pow(cos(x), 4) + pow(sin(y), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;;
	return(f);
}

int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	float x, y, f;
	x = 5;
	y = 8.2537;
	f = func(x, y);
	printf("��� X=5 � Y = 8.2537 ��������� = %f\n", f);
	printf("������� �=");
	scanf_s("%f", &x);
	printf("������� Y=");
	scanf_s("%f", &y);
	f = func(x, y);
	printf("��������� = %f", f);
	getchar();
	getchar();
	return(0);
}