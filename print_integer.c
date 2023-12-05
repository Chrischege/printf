#include "main.h"
/**
 * print_integer - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int numb, lst = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	numb = n;

	if (lst < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		lst = -lst;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int numb, lst = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	numb = n;

	if (lst < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		lst = -lst;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}

