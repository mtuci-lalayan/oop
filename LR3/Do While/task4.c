#include <math.h>
#include "funcs.h"
float a;

int task4(float e)
{

	int m = -1;
	int i = 0;
	do
	{
		a = pow(-1, i)*(1 - ((pow(i + 1, 2)) / (pow(i + 2, 2))));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
		++i;
	} while (i > -1);
	return(m);
}

