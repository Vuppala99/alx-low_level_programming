#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, sum = 0, c, add = 0, d, ad = 0, k, e, w, result;

	for (i = 1; i < 342; i++)
	{
		c = 3 * i;
		sum += c;
	}
	for (j = 1; j < 205; j++)
	{
		d = 5 * j;
		add += d;
	}
	for (k = 1; k <= 69; k++)
	{
		e = 15 * k;
		ad += e;
	}
	w = sum + add;
	result = w - ad;
	printf("%d\n", result);

	return (0);
}
