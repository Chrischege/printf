#include "main.h"
/**
 * display_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int display_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * display_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int display_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * display_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int display_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * display_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int display_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_int - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (display_unsigned_number(num));

	if (num < 1)
		return (-1);
	return (display_unsigned_number(num));
}
