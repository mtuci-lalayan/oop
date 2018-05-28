#include <stdio.h> // ������������ ���� ������� �����-������
#include <math.h> // ������������ ���� �������������� �������
#include <stdlib.h> // ������������ ���� ����������� ����������

int task1(float x, float y);
float task2(float x);

int main(void)
{
	system("chcp 1251"); // ������� � ������� �� ������� ����
	system("cls"); // ������� �������

	float x, y, f; // ���������� ���������� ��� �������
	int n; // ���������� ���������� ����������������� ������
	
	printf("�������� ����� �������: 1 ��� 2?\n");
	scanf_s("%d", &n);
	printf("\n"); // ������ ����� ������ ������� � ��������
	
	switch (n)
	{
	case 1: // ����� ������� �������
	{

		printf("�� ������� ������� 1\n");
		printf("������� X: ");
		scanf_s("%f", &x);
		printf("������� Y: ");
		scanf_s("%f", &y);
		printf("���������: %d\n", task1(x, y));
	}
	break;
	case 2:
	{
		printf("�� ������� ������� 2\n");
		printf("������� �: ");
		scanf_s("%f", &x);
		printf("���������: %.2f\n", task2(x));
	}
	break;
	default:
		printf("������� ������������ ��������\n");
		break;
	}

	system("pause");
	return 0;
}

int task1(float x, float y)
{
	if ((x <= 1 && x >= -1) && (y <= 1 && y >= -1)) // ��������� � �������
		if (x > 0 && y < 0) return 0; // ��������� � ������ ������ ��������
		else return 1;
	else return 0;
}

float task2(float x)
{
	float f;
	x <= -3 ? (f = (x*x + 3*x + 9)) : (f = ((sin(x)) / (x*x - 9)));
	return f;
}