#include <stdlib.h> //Заголовочный файл стандартной библиотеки
#include <math.h> // Заголовочный файл мат. функций

int x; float result; // Объявление глобальных переменных

void func()
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}