#include "main.h"
/**
 * _islower - check if the letter is in lower or upper case
 * @c: is the letter
 * Return: 1 if the letter is lower. 0 if the letter is upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
