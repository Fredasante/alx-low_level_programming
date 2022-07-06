#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: special parameter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	
	return (last_digit);
}
