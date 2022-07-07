#include "main.h"
/**
 * print - print variable recursively
 * @var: var
 */

void print(int var)
{
	if (var < 0)

	{
		_putchar('-');
		var = -var;
	}
	if (var / 10)
		print(var / 10);
	_putchar(var % 10 + '0');
}
/**
 * more_numbers - print numbers up to 14
 */

void more_numbers(void)
{
	int jj = 0;

	while (jj < 10)
	{
		int ii = 0;

		do {
			if (ii < 10)
				print(ii);
			else
			{
				print(ii);
			}

		} while (ii < 15);
		jj++;
		_putchar('\n');
	}
}

