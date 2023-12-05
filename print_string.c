#include "main.h"
/**
 * print_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *s;
	int j, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = string_len(s);
		for (j = 0; j < len; j++)
			_putchar(s[j]);
		return (len);
	}
	else
	{
		len = string_len(s);
		for (j = 0; j < len; j++)
			_putchar(s[j]);
		return (len);
	}
}

