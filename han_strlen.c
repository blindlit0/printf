#include "main.h"

/**
 * _strlen - prints string length
 * @string: string to print length
 * Return: string length
 */

int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}

