#include "main.h"
/**
 * print_unsigned_int - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_unsigned_int(va_list args)
{
	unsigned int m = va_arg(args, unsigned int);
	int num, lst = m % 10, dgt, exp = 1;
	int  i = 1;

	m = m / 10;
	num = m;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		lst = -lst;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			dgt = num / exp;
			_putchar(dgt + '0');
			num = num - (dgt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}

