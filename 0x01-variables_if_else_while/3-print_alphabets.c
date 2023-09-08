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

	char ti = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ti <= 'Z')
	{
		putchar(ti);
		ti++;
	}
	putchar('\n');
	return (0);
}
