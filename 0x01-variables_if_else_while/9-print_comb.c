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
	int  alpha = '0';

	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
		if (alpha == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
