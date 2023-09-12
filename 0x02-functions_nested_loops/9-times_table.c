#include"main.h"

/**
 * times_table - print 9 times table
 *
 * Exemple Table
 * 0, 0, 0, ..
 * 0, 1, 2 ..
 *
*/
void times_table(void)
{
	int num, nult, prod;

	for (num = 0; num <= 9; nult++)
	{
		_putchar(48);
		for (nult = 1; nult <= 9; nult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * nult;

			/*
			 * put space if product is asingle number
			 * place the first digit if its number
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
