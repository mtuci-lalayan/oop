#include <stdio.h>

int task6(int *arr, int n)
{
	//Вариант 2 Сортировка Вставками
	int j, tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; --j)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}
м