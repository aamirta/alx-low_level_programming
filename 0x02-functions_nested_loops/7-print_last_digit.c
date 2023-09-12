#include"main.h"

/**
 * print_last_digit - print last degit of a number
 *
 * @n: takes number input
 *
 * Return: lastdegit
*/
int print_last_digit(int n)
{
	int (lastdigit);

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + 48);
	return (lastdigit);
}
