#include <math.h>
#include <stdio.h>
#include "funcs.h"

float a;

float task3(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		if ((i + 1) % k == 0)
			continue;
		printf("%f", a);
	}

}



