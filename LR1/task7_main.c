#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	x = 5;
	y = 8.2537;
	func();
	printf("При X=5 и Y = 8.2537 результат = %f\n", f);
	printf("Введите Х=");
	scanf_s("%f", &x);
	printf("Введите Y=");
	scanf_s("%f", &y);
	f = func();
	printf("Результат = %f", f);
	getchar();
	getchar();
	return(0);
}
