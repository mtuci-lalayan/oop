#include <stdlib.h> //������������ ���� ����������� ����������
#include <stdio.h> // ������������ ���� ������� �����-������
#include <math.h> // ������������ ���� ���. �������

int x; float result; // ���������� ���������� ����������
void func(void); // �������� ������� ��� ����������

int main()
{
	system("chcp 1251"); // ������� ������� �� ������� ����
	system("cls"); // ������� �������

	// ���������� ������� � �������������� ������� �������� ��������
	x = 19;
	func();
	printf("��� �������� �������� x = 19 �������� ��������� ��������� %.4f\n\n", result);

	//���������� ������� � �������������� �������� ������������� ��������
	printf("������� x: ");
	scanf_s("%d", &x);
	func();
	printf("��� ��������� �������� x = %d �������� ��������� ��������� %.4f\n", x, result);

	system("pause"); // �������� ������� ������� ��� �������������� ����������
	return 0;
}

void func()
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}