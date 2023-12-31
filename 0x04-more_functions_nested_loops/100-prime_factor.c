#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Description: get the largest prime factor of a number
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i;
	long int max;
	long int n;

	n = 612852475143;
	max = 0;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
