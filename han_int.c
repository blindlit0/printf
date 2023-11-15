#include "main.h"

/**
 * _inte - function to print integers
 * @integ: list printed
 * Return: Return number of integers
 */

int _inte(va_list integ)
{
	int a, expon = 1, len = 0;
	unsigned int n;

	a = va_arg(integ, int);

	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;
	while (n / expon > 9)
		expon *= 10;

	while (expon != 0)
	{
		len = len + _putchar(n / expon + '0');
		n = n % expon;
		expon = expon / 10;
	}
	return (len);
}

