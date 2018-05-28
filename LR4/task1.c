#include <math.h>
#include <stdio.h>
float task1(int *x)
{
	if (*x != 0)
	{
		printf("Задание 1\n");
		printf("Адрес =%p , значение = %d\n", x, *x);
		++*x;
		printf("Новое значение = %d\n", *x);
	}
	else
		printf("Указатель пустой");
}
