#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

