#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 5;
	y = 8.2537;
	func();
	printf("��� X=5 � Y = 8.2537 ��������� = %f\n", f);
	printf("������� �=");
	scanf_s("%f", &x);
	printf("������� Y=");
	scanf_s("%f", &y);
	f = func();
	printf("��������� = %f", f);
	getchar();
	getchar();
	return(0);
}
