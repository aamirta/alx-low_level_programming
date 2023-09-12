#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
*/
void print_alphabet_x10(void)
{
	int	i;
	int	k;

	i = 'a';
	k = 0;
	while (k <= 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i = 'a';
		k++;
	}
}
