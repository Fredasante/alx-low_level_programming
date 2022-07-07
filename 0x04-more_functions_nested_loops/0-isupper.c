#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if a character is uppercase
 * @c: variable whose character is to be checked
 * Return: 1 if is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
