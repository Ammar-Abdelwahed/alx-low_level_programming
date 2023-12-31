#include "main.h"
/**
 * print_triangle - print triangle using #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i < size + 1; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
