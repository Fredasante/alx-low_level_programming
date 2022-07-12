#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define stopLimit 2645
#define asciiStop 127
#define asciiStart 32

/**
 * main - generates a random password
 * Return: 0 if success
 */

int main(void)
{
	char password[100];
	int randValue, num = 0, i = 0;

	srand(time(NULL));

	while (num < stopLimit)
	{
		randValue = random() % asciiStop;
		if (randValue > asciiStart)
		{
			password[i++] = randValue;
			num += randValue;
		}
	}

	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s", password);

	return (0);
}
