#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: element of an array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
