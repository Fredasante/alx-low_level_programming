#include "main.h"
#include <string.h>

/**
 * *_strncpy - copying purpose
 * @dest: first parameter
 * @src: second parameter
 * @n: - third parameter
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
