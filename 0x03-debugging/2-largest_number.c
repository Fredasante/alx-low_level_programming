#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @n1: first number
 * @n2: second number
 * @n3: third number
 * Return: largest number
 */
int largest_number(int n1, int n2, int n3)
{
	int largest;

		if (n1 > n2 && n1 > n3)
			largest = n1;
		else if (n2 > n1 && n2 > n3)
			largest = n2;
		else if (n3 > n2)
			largest = n3;

		else
			largest  = n2;

	return (largest);
}
