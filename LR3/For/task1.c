#include <math.h>
#include <stdio.h>

float a, f;
float task1(int n)
{
	f = 0.0;
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		f += a;

	}


	return (f);
}

