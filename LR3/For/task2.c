#include <math.h>
#include <stdio.h>
float a, f;

float task2(float e)
{
	a = e + 1.0;
	f = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		f += a;
	}
	return(f);
}
;
}


