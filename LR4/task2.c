#include <stdio.h>
#include <math.h>
float task2()
{
	int g;
	printf("Задание 2\n");
	printf("Введите число = ");
	scanf_s("%d", &g);
	printf("Адрес = %p, Значение  = %d\n", &g, g);
	task1(&g);
	printf("Адрес = %p, Значение = %d\n", &g, g);
}
