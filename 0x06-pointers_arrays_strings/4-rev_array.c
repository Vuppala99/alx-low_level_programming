#include "main.h"
/**
 * reverse_array - reverse given array
 * @a: array to reverse
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}



