#include <stdio.h>
#include <stdlib.h>

float task1(int *);
float task2();
float task3();
int task4(int *arr, int n);
int taks5(int *arr, int n);
int task6(int *arr, int n);
int task7();
int task8();
int main(void)
{
	system("CHCP 1251");
	system("cls");
	int g, x;

	while (g = -1)
	{
		printf("������� 2 - 1\n");
		printf("������� 3 - 2\n");
		printf("������� 7 - 3\n");
		printf("������� 8 - 4\n");
		printf("����� - 5\n");
		printf("�������� �������\n");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("����� � �����\n");
			task2();
			break;
		}
		case 2:
		{
			printf("����� � ������������ ������\n");
			task3();
			break;
		}
		case 3:
		{
			printf("������ �� n-��������� � �����\n");
			task7();
			break;
		}
		case 4:
			printf("������ �� n-��������� � ������������ ������\n");
			task8();
			break;
		case 5:
			return(0);
		default:
			printf("������������ ����\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}
