#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 * @n: n is passed as argument
 *
 * Return: integer
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 99 ; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
