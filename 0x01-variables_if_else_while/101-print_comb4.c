#include <stdio.h>
/**
 * main - Entry pont
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, a;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (a = j + 1; a <= '9'; a++)
			{
				putchar(i);
				putchar(j);
				putchar(a);

				if (i == '7' && j == '8' && a == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
