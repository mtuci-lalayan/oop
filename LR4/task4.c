#include <stdio.h>

int task4(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d]=", i + 1);
		scanf("%d", &arr[i]);
	}
}
