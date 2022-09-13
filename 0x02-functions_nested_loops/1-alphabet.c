#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print lower alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
