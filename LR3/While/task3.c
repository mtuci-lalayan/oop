#include <math.h>
#include <stdio.h>
#include "funcs.h"
float a;
float task3(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%f", a);
	}
}

