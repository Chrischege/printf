#include "main.h"

/**
 * print_execute_string - print exclusive string.
 * @val: parameter.
 * Return: integer.
 */
int print_execute_string(va_list val)
{
	char *s;
	int i, length = 0;
	int val_int;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			val_int = s[i];
			if (val_int < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXADECIMAL_extra(val_int);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}

