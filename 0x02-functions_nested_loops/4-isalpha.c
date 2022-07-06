#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: a special character
 * Return: 1 or 0 depending on conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
