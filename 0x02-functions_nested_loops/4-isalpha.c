#include "main.h"

/**
 * _isalpha - this program checks for alphabet characters
 *
 * @c: the letter being checked
 *
 * Return:1 no error, other wise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
