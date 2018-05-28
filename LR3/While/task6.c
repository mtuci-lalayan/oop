#include <stdio.h>
#include "funcs.h"
#include <math.h>

int main(void)
{
	system("chcp 1251");
	int i = 0, d;

	while (i != -1)
	{
		system("cls");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("Выход -6\n\n");
		int n = 0, k = 0;
		float e = 0.0;

		printf("Введите номер задание: ");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых = ");
			scanf_s("%d", &n);
			printf("Cумма = %f\n\n", task1(n));
			system("pause");
			break;


		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность = ");
			scanf_s("%f", &e);
			printf("Сумма = %f\n\n", task2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3\n");
			printf("ВВедите n=");
			scanf_s("%d", &n);
			printf("Введите k=");
			scanf_s("%d", &k);
			printf("Последовательность = \n");
			task3(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("Задание 5\n");
			printf("Введите е=");
			scanf_s("%f", &e);
			printf("Номер =  %d\n\n", task4(e));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите e");
			scanf_s("%f", &e);
			printf("Номер = %d\n\n", task5(e));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("Неправильный ввод \n");
			system("pause");
		}

	}
	return(0);
}