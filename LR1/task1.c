#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, f, y;
	x = 5;
	y = 8.2537;
	f = pow(cos(x), 4) + pow(sin(y), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	printf("при x=5 и y=8.2537 результат = %f\n", f);
	printf("введите x =");
	scanf_s("%f", &x);
	printf("введите y=");
	scanf_s("%f", &y);
	f = pow(cos(x), 4) + pow(sin(x), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	printf("результат = %f", f);
	getchar();
	getchar();
	return(0);
}
