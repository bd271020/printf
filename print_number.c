#include "main.h"

/**
 * print_number - prints a number sent to this function
 * @arg: List of arguments
 * Return: The number of arguments printed
 */

int print_number(va_list arg)
{
	int n, d, i;
	unsigned int x;

	n = va_arg(arg, int);
	d = 1;
	i = 0;

	if (n < 0)
	{
		i = i + _putchar('-');
		x = n * (-1);
	}
	else
		x = n;
	while ((x / d) > 9)
		d = d * 10;
	while (d != 0)
	{
		i = i + _putchar('0' + (x / d));
		x = x % d;
		d = d / 10;
	}
	return (i);
}

/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */

int print_unsgined_number(unsigned int n)
{
	int d, i;
	unsigned int x;

	d = 1;
	i = 0;

	x = n;

	while ((x / d) > 9)
		d = d * 10;
	while (d != 0)
	{
		i = i + _putchar('0' + (x / d));
		x = x % d;
		d = d / 10;
	}
	return (i);
}
