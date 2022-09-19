#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: a is passed as an pointer
 * @b: bis passed as an pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
