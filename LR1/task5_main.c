#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x, float y);
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, y, f;
	x = 5;
	y = 8.2537;
	f = func(x, y);
	printf("При X=5 и Y = 8.2537 результат = %f\n", f);
	printf("Введите Х=");
	scanf_s("%f", &x);
	printf("Введите Y=");
	scanf_s("%f", &y);
	f = func(x, y);
	printf("Результат = %f", f);
	getchar();
	getchar();
	return(0);
}
