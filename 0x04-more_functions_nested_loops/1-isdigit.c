#include "main.h"
/**
 * _isdigit - check whethergiven is digit
 * @c: passed as parameter
 *
 * Return: 1 if succesful else 0
 */
int _isdigit(int c)
{
	int digit;

	if ((c > 47) && (c < 58))
		digit = 1;
	else
		digit = 0;

	return (digit);
}
