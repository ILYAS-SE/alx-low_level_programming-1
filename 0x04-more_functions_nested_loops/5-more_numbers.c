#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */

void more_numbers(void)
{
	char n, k;
	int i = 0;


	while (i < 11)
	{
		n = 0;
		while (n <= 14)
		{
			k = n;
			if (n > 9)
			{
				_putchar('1');
				k = n % 10;
			}

			_putchar('0' + k);
		}

		_putchar('\n');
		i++;
	}
}
