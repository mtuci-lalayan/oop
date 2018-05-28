#include <stdlib.h> //Заголовочный файл стандартной библиотеки
#include <math.h> // Заголовочный файл мат. функций

float func(int x)
{
	float result;
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	return result;
}