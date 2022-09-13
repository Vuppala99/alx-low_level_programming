#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int a = 1, b = 2, temp, i;

	printf("%d, %d, ", a, b);
	for (i = 0; i <= 95; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
		printf("%d", temp);
		if (i == 95)
			continue;
		printf(", ");
	}
	printf("\n");

	return (0);
}
