#include <stdio.h>
#include <math.h>
float task2()
{
	int g;
	printf("������� 2\n");
	printf("������� ����� = ");
	scanf_s("%d", &g);
	printf("����� = %p, ��������  = %d\n", &g, g);
	task1(&g);
	printf("����� = %p, �������� = %d\n", &g, g);
}
