#include <stdio.h>
#include "funcs.h"

int main(void)
{
	system("chcp 1251");/*Русский язык*/
	int i = 0;
	int n;
	do
	{

		system("cls");
		printf("Выберите задание: \n");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("6 - выход\n\n");
		int n = 0, k = 0;
		float e = 0.0;
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n: ");
			scanf_s("%d", &n);
			printf("Сумма=%f\n\n", task1(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность e: ");
			scanf_s("%f", &e);
			printf("Сумма=%f\n\n", task2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3\n");
			printf("Введите число n: ");
			scanf_s("%d", &n);
			printf("Введите число k: ");
			scanf_s("%d", &k);
			printf("Последовательность: ");
			task3(n, k);
			printf("\n\n");
			system("pause");
			break;

		case 4:
			system("cls");
			printf("Задание 4\n");
			printf("Введите число e: ");
			scanf_s("%f", &e);
			printf("Номер: %d\n\n", task4(e));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите число e: ");
			scanf_s("%f", &e);
			printf("Номер: %d\n\n", task5(e));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("\nНеправильный ввод\n");
			system("pause");
		}

	} while (i != -1);

	system("pause");
	return (0);
}
