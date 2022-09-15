#include <unistd.h>
/**
 * _putchar - writes charecter to output
 * @c: charecter passed
 *
 * Return: 1
 */
int _putchar(char c)
{
	return ((write(1, &c, 1)));
}
