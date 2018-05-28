#include <stdio.h> // Заголовочный файл функций ввода-вывода
#include <math.h> // Заголовочный файл математических функций
#include <stdlib.h> // Заголовочный файл стандартной библиотеки

int task1(float x, float y);
float task2(float x);

int main(void)
{
	system("chcp 1251"); // Переход в консоли на русский язык
	system("cls"); // Очистка консоли

	float x, y, f; // Объявление параметров для функции
	int n; // Объявление переменной пользовательского выбора
	
	printf("Выберите номер задания: 1 или 2?\n");
	scanf_s("%d", &n);
	printf("\n"); // Отступ между вводом задания и решением
	
	switch (n)
	{
	case 1: // Выбор первого задания
	{

		printf("Вы выбрали задание 1\n");
		printf("Введите X: ");
		scanf_s("%f", &x);
		printf("Введите Y: ");
		scanf_s("%f", &y);
		printf("Результат: %d\n", task1(x, y));
	}
	break;
	case 2:
	{
		printf("Вы выбрали задание 2\n");
		printf("Введите Х: ");
		scanf_s("%f", &x);
		printf("Результат: %.2f\n", task2(x));
	}
	break;
	default:
		printf("Введено некорректное значение\n");
		break;
	}

	system("pause");
	return 0;
}

int task1(float x, float y)
{
	if ((x <= 1 && x >= -1) && (y <= 1 && y >= -1)) // Попадание в квадрат
		if (x > 0 && y < 0) return 0; // Попадание в нижнюю правую четверть
		else return 1;
	else return 0;
}

float task2(float x)
{
	float f;
	x <= -3 ? (f = (x*x + 3*x + 9)) : (f = ((sin(x)) / (x*x - 9)));
	return f;
}

