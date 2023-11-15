#include "holberton.h"

/**
 * cha - function to return char
 * @character: Given list
 * Return: number of char printed
 */

int cha(va_list character)
{
	return (_putchar(va_arg(character, int)));
}

