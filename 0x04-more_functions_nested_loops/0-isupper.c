#include "main.h"
/**
 * _isupper - check if the character upper case or lower case
 * @c: the character
 * Return: 1 if c is upper. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
