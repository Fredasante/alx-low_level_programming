#include "main.h"

/**
 * print_line - print lines (_) n number of times
 * @n: integer variable
 */

void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}
