#include "main.h"

/**
 * print_HEXADECIMAL - prints an hexgecimal number.
 * @val: arguments.
 * Return: cter.
 */
int print_HEXADECIMAL(va_list val)
{
	int i;
	int *arr;
	int cter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		cter++;
	}
	cter++;
	arr = malloc(cter * sizeof(int));

	for (i = 0; i < cter; i++)
	{
		arr[i] = tem % 16;
		tem /= 16;
	}
	for (i = cter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cter);
}

