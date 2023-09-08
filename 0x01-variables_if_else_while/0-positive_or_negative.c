#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * Description : positive or negative
 *
 * return: 0 (secess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
		else if (n == 0)
			printf ("%i is zer\n", n);
			else 
				printf("% is negative\n", n);

	return (0);
}
