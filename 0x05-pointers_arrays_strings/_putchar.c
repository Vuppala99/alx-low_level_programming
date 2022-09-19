#include <unistd.h>
/**
 * _putchar - writes charecter
 * @c : c is passed as argument
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
