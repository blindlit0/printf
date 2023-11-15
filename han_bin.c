#include "main.h"

int _bin(va_list bin)
{
	int count = 0, i;
	int *ara;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	ara = malloc(count * sizeof(int));
	if (ara == NULL)
	{
		free(ara);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		ara[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(ara[i] + '0');
	}
	free(ara);
	return (count);
}
