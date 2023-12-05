#include "main.h"

/**
 * display_reverse - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int display_reverse(va_list args)
{

	char *s = va_arg(args, char*);
	int b;
	int c = 0;

	if (s == NULL)
		s = "(null)";
	while (s[c] != '\0')
		c++;
	for (b = c - 1; b >= 0; b--)
		_putchar(s[b]);
	return (c);
}

