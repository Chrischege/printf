#include "main.h"

/**
 * print_HEX_extra - prints an hexgecimal number.
 * @num: number to print.
 * Return: cter.
 */
int print_HEXADECIMAL_extra(unsigned int num)
{
	int i;
	int *arr;
	int cter = 0;
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

