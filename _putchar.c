#include "main.h"

/**
 * _putchar - function to print char
 * @c: character being passed
 * Return: returning character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

