#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func();
float x, y, f;
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 5;
	y = 8.2537;
	func(x, y);
	printf("��� X=5 � Y = 8.2537 ��������� = %f\n", f);
	printf("������� �=");
	scanf_s("%f", &x);
	printf("������� Y=");
	scanf_s("%f", &y);
	func(x, y);
	printf("��������� = %f", f);
	getchar();
	getchar();
	return(0);
}

float func(void)
{
	f = pow(cos(x), 4) + pow(sin(y), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	return(0);
}
