#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n
 *
 * Return: 0 (seccess)
*/
int main(void)
{
	int n, degit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	degit = n % 10;
	if (degit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, degit);
	else if (degit == 0)
		printf("Last digit of %i is %i and is 0\n", n, degit);
	else if (degit < 6 && degit != 0)
		printf("Last digit of %i  is %i and is less than 6 and not 0\n", n, degit);

	return (0);
}
