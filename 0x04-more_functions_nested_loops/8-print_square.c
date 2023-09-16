#include"main.h"

/**
 * print_square - print a square using the charcter #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (seccess)
*/
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, colum;

		for (row = 0; row < size; row++)
		{
			for (colum = 0; colum < size; colum++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
