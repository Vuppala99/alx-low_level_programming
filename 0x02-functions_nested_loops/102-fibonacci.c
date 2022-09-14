#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	unsigned long i, a = 0, b = 1, add;

	for (i = 0; i < 50; i++)
	{
		add = a + b;
		printf("%lu", add);
		a = b;
		b = add;
		if (i == 49)
			continue;
		printf(", ");
	}
	printf("\n");

	return (0);
}
