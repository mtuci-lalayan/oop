#include <stdio.h>

int task8()
{
	int n = 0;
	printf("¬ведите размер массива: ");
	scanf("%d", &n);
	int *arr = (int *)malloc(sizeof(int)*n);
	task4(arr, n);
	task5(arr, n);
	task6(arr, n);
	task5(arr, n);
	free(arr);
}
