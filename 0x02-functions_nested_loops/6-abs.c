#include"main.h"

/**
 * _abs - function that computes the absolute
 *		value of integer
 *
 * @n: takes in integer type input
 *
 * Return: Always 0 (seccess)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
