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
	int degit1 = 0, degit2;

	while (degit1 <= 9)
	{
		degit2 = 0;
			while (degit2 <= 9)
			{
				if (degit1 != degit2 && degit1 < degit2)
				{
					putchar(degit1 + 48);
					putchar(degit2 + 48);
					if (degit1 + degit2 != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				degit2++;
			}
			degit1++;
	}
	putchar('\n');
	return (0);
}

