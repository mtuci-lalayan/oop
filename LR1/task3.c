#include <stdlib.h> //������������ ���� ����������� ����������
#include <stdio.h> // ������������ ���� ������� �����-������
#include <math.h> // ������������ ���� ���. �������

float func(int x);

int main()
{
	system("chcp 1251"); // ������� ������� �� ������� ����
	system("cls"); // ������� �������

	const int x = 19;
	int x1;
	float result;

	// ���������� ������� � �������������� ��������
	result = func(x);
	printf("��� �������� �������� x = 19 �������� ��������� ��������� %.4f\n\n", result);

	//���������� ������� � �������������� �������� ������������� ��������
	printf("������� x: ");
	scanf_s("%d", &x1);
	result = func(x1);
	printf("��� ��������� �������� x = %d �������� ��������� ��������� %.4f\n", x1, result);

	system("pause"); // �������� ������� ������� ��� �������������� ����������
	return 0;
}

float func(int x)
{
	float result;
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	return result;
}