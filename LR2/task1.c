#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>  /*������������� ������� system*/
float func_circle(float x, float y);
float func_usl(float x);
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	float x, y, f;
	int n;
	printf("�������� ������� 1 ��� 2:\n");
	scanf_s("%i", &n);
	switch (n)
	{
	case 1:
	{

		printf("�� ������� 1 �������\n");
		printf("������� �=");
		scanf_s("%f", &x);
		printf("������� Y=");
		scanf_s("%f", &y);
		func_circle(x, y);
		printf("%d", func_circle(x, y));
	}
	break;
	case 2:
	{
		printf("�� ������� 2 �������\n");
		printf("������� �=");
		scanf_s("%f", &x);
		func_usl(x);
		printf("%f", func_usl(x));
	}
	break;
	default:
		printf("������������ ���� ");
		break;
	}

	getchar();
	getchar();

	return(0);
}

float func_circle(float x, float y)
{
	if (sqrt(x*x + y * y) <= 1) /*������� ��������� � ����*/

		if (x > 0 && y<0)   /*���������� 4 �������� */
			return(0);

		else
			return(1);
	else
		return(0);
}

float func_usl(float x)
{
	float f;
	x >= 3.2 ? (f = (54 * pow(x, 4)) / (-5 * pow(x, 2) + 7)) : (f = pow(x, 4) + 9);
	return(f);
}
