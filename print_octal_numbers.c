#include "main.h"

/**
 * print_octal - prints an octal number.
 * @val: arguments.
 * Return: cnter.
 */
int print_octal(va_list val)
{
	int i;
	int *arr;
	int cnter = 0;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int temp = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		cnter++;
	}
	cnter++;
	arr = malloc(cnter * sizeof(int));

	for (i = 0; i < cnter; i++)
	{
		arr[i] = temp % 8;
		temp /= 8;
	}
	for (i = cnter - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnter);
}

