#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long  int a = 1, b = 2, temp, i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i <= 95; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
		printf("%lu", b);
		if (i == 95)
			continue;
		printf(", ");
	}
	printf("\n");

	return (0);
}
