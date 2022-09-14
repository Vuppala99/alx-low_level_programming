#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints table
 * @n: n is passed as argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			c = i * j;
			printf("%d,   ", c);
			if (j == n)
				continue;
		}
		printf("\n");
	}
}
