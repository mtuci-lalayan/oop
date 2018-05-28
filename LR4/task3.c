#include <stdio.h>
#include <math.h>
float task3()
{
	printf("Задание 3\n");

	int *d = (int *)malloc(sizeof(int));
	printf("Введите число ");
	scanf_s("%d", d);

	printf("Адрес = %p, Значение = %d \n", d, *d);
	task1(d);
	printf("Адрес = %p, Значение = %d \n", d, *d);
	free(d);
}
