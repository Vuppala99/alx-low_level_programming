#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long int i = 2, k = 0;
	unsigned long int n = 612852475143;

	while (n > i)
	{
		while (n % i == 0)
		{
			if (i > k)
				k = i;
		n = n / i;
		}
		i++;
	}
	printf("%lu\n", k);
}
