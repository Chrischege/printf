#include "main.h"

/**
 * print_hexadecimal_extra - prints an hexadecimal number.
 * @num: arguments.
 * Return: cnt.
 */
int print_hexadecimal_extra(unsigned long int num)
{
	long int i;
	long int *arr;
	long int cnt = 0;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(long int));

	for (i = 0; i < cnt; i++)
	{
		arr[i] = tmp % 16;
		tmp = tmp / 16;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}

