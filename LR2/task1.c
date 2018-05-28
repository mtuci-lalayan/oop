#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>  /*Использование функции system*/
float func_circle(float x, float y);
float func_usl(float x);
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	float x, y, f;
	int n;
	printf("Выберите задание 1 или 2:\n");
	scanf_s("%i", &n);
	switch (n)
	{
	case 1:
	{

		printf("Вы выбрали 1 задание\n");
		printf("Введите Х=");
		scanf_s("%f", &x);
		printf("Введите Y=");
		scanf_s("%f", &y);
		func_circle(x, y);
		printf("%d", func_circle(x, y));
	}
	break;
	case 2:
	{
		printf("Вы выбрали 2 задание\n");
		printf("Введите Х=");
		scanf_s("%f", &x);
		func_usl(x);
		printf("%f", func_usl(x));
	}
	break;
	default:
		printf("Неправильный ввод ");
		break;
	}

	getchar();
	getchar();

	return(0);
}

float func_circle(float x, float y)
{
	if (sqrt(x*x + y * y) <= 1) /*Сначала попадание в круг*/

		if (x > 0 && y<0)   /*Исключение 4 четверти */
			return(0);

		else
			return(1);
	else
		return(0);
}

float func_usl(float x)
{
	float f;
	x >= 3.2 ? (f = (54 * pow(x, 4)) / (-5 * pow(x, 2) + 7)) : (f = pow(x, 4) + 9);
	return(f);
}
