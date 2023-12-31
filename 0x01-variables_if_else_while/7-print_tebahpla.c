#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabe on reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
