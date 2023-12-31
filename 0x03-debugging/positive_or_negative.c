#include "main.h"

void positive_or_negative(int x)
{
	if (x > 0)
	{
		printf("%d is postive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else
	{
		printf("%d is negative\n", x);
	}
}
