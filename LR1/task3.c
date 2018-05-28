#include <stdlib.h> //Заголовочный файл стандартной библиотеки
#include <stdio.h> // Заголовочный файл функций ввода-вывода
#include <math.h> // Заголовочный файл мат. функций

float func(int x);

int main()
{
	system("chcp 1251"); // Перевод консоли на русский язык
	system("cls"); // Очистка консоли

	const int x = 19;
	int x1;
	float result;

	// Выполнение задания с использованием констант
	result = func(x);
	printf("При заданном значении x = 19 значение выражения равняется %.4f\n\n", result);

	//Выполнение задания с использованием заданных пользователем значений
	printf("Введите x: ");
	scanf_s("%d", &x1);
	result = func(x1);
	printf("При введенном значении x = %d значение выражения равняется %.4f\n", x1, result);

	system("pause"); // Ожидание нажатия клавиши для предотвращения завершения
	return 0;
}

float func(int x)
{
	float result;
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	return result;
}