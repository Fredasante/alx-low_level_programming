#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 excluding 2 and 4
 *
 */

void print_most_numbers(void)
{
	int var = 0;

	do {
		if (var == 4 || var == 2)

		{
			var++;
			continue;
		}
		else
			_putchar(var + '0');
		var++;
	} while (var < 10);

	_putchar('\n');
}
