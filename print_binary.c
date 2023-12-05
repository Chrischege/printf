#include "main.h"

/**
 * print_binary - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_binary(va_list val)
{
	int flag = 0;
	int cnt = 0;
	int i, a = 1, b;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & numb);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		_putchar('0');
	}
	return (cnt);
}

