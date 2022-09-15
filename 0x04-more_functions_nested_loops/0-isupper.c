#include "main.h"
/**
 * _isupper - tells whether alphabet is upper or lower
 * @c: cis passed as argument
 *
 * Return: 1 if upper else 0
 */
int _isupper(int c)
{
	int  upper;

	if ((c > 64) && (c < 91))
		upper = 1;
	else
		upper = 0;

	return (upper);
}
