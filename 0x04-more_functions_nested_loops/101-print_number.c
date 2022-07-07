#include "main.h"

void print(unsigned int n);

/**
 * print_number - print number
 * @var: variable to be printed
 */

void print_number(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}

	print(var);
}

/**
 * print - subfunction to print recursively
 * @n: variable to be printed
 */

void print(unsigned int n)
{
	if (n / 10)
		print(n / 10);
	_putchar('0' + n % 10);
}
