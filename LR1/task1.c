#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	float x, f, y;
	x = 5;
	y = 8.2537;
	f = pow(cos(x), 4) + pow(sin(y), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	printf("��� x=5 � y=8.2537 ��������� = %f\n", f);
	printf("������� x =");
	scanf_s("%f", &x);
	printf("������� y=");
	scanf_s("%f", &y);
	f = pow(cos(x), 4) + pow(sin(x), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	printf("��������� = %f", f);
	getchar();
	getchar();
	return(0);
}
