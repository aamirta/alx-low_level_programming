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
		lastdegit = -1 * (n % 10);
	else
		lastdegit = n % 10;
	_putchar(lastdegit + 48);
	return (lastdegit);
}
