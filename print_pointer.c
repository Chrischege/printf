#include "main.h"

/**
 * display_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int display_pointer(va_list val)
{
	void *w;
	char *q = "(nil)";
	long int x;
	int y;
	int i;

	w = va_arg(val, void*);
	if (w == NULL)
	{
		for (i = 0; q[i] != '\0'; i++)
		{
			_putchar(q[i]);
		}
		return (i);
	}

	x = (unsigned long int)w;
	_putchar('0');
	_putchar('x');
	y = print_hexadecimal_extra(x);
	return (y + 2);
}

