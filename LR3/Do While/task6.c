#include <stdio.h>
#include "funcs.h"

int main(void)
{
	system("chcp 1251");/*������� ����*/
	int i = 0;
	int n;
	do
	{

		system("cls");
		printf("�������� �������: \n");
		printf("������� 1\n");
		printf("������� 2\n");
		printf("������� 3\n");
		printf("������� 4\n");
		printf("������� 5\n");
		printf("6 - �����\n\n");
		int n = 0, k = 0;
		float e = 0.0;
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			system("cls");
			printf("������� 1\n");
			printf("������� ����� ��������� n: ");
			scanf_s("%d", &n);
			printf("�����=%f\n\n", task1(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("������� 2\n");
			printf("������� �������� e: ");
			scanf_s("%f", &e);
			printf("�����=%f\n\n", task2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("������� 3\n");
			printf("������� ����� n: ");
			scanf_s("%d", &n);
			printf("������� ����� k: ");
			scanf_s("%d", &k);
			printf("������������������: ");
			task3(n, k);
			printf("\n\n");
			system("pause");
			break;

		case 4:
			system("cls");
			printf("������� 4\n");
			printf("������� ����� e: ");
			scanf_s("%f", &e);
			printf("�����: %d\n\n", task4(e));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("������� 5\n");
			printf("������� ����� e: ");
			scanf_s("%f", &e);
			printf("�����: %d\n\n", task5(e));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("\n������������ ����\n");
			system("pause");
		}

	} while (i != -1);

	system("pause");
	return (0);
}
