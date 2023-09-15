#include"main.h"
/**
 * print_line - print a straith line
 *
 * @n: is the number of times the _ character
 *	should b printed
*/
void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
