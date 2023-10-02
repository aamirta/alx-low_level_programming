#include"main.h"
/**
 * _islower - function to check
 *
 * @c: check input of function
 *
 * Return: 1 if 'c' is lowercase
 *		otherwise always 0 (seccess)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
