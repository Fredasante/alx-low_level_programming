#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: special parameter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	n = -n;
	return (n % 10);
}
