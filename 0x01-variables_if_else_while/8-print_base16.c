#include <stdio.h>
/**
 * main - Entry point
 * Description: print hex numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
