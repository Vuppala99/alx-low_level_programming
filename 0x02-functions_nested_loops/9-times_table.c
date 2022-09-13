#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, a, c;
	int b = 9;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			a = i * j;
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		c = i * b;
		printf("%d", c);
		_putchar('$');
		_putchar('\n');
	}
}

