#include <math.h>
#include "funcs.h"
float a, f;

float task2(float e)
{

	a = e + 1.0;
	f = 0.0;
	int i = 0;
	do
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		f += a;
		++i;
	} while (fabs(a) > e);
	return(f);
}


