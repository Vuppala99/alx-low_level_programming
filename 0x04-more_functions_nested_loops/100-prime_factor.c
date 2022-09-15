#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long i, n = 612852475143, k;

	for (i = 1; i < (n / 2); i++)
	{
		if ((n % i) == 0)
			k = i;
	}
	printf("%lu\n", k);
}
