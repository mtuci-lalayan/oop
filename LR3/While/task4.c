#include <math.h>
#include "funcs.h"
float a;
int m = -1;

int task4(float e)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
		++i;
	}
	return(m);
}
