#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * on error, -1vis returned and error is set
 * separately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
