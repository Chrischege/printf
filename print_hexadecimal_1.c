#include "main.h"

/**
 * print_hexadecimal - prints an hexadecimal number.
 * @val: arguments.
 * Return: cnter.
 */
int print_hexadecimal(va_list val)
{
	int i;
	int *arr;
	int cnter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		cnter++;
	}
	cnter++;
	arr = malloc(cnter * sizeof(int));

	for (i = 0; i < cnter; i++)
	{
		arr[i] = tem % 16;
		tem /= 16;
	}
	for (i = cnter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnter);
}

