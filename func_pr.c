
#include "holberton.h"

/**
 * p_charac - print a character
 *
 * @type_pr: store a list of characters
 *
 * Return: the character
 */
int p_charac(va_list type_pr)
{
	int ch = va_arg(type_pr, int);

	return (_putchar(ch));
}

/**
 * p_string - print a character
 *
 * @type_pr: store a list of characters
 *
 * Return: the store of the amount of character variable
 */
int p_string(va_list type_pr)
{
	int counter = 0;
	int i = 0;
	char *str;

	str = va_arg(type_pr, char *);
	if (str)
	{
		for (i = 0; str[i]; i++)
			counter += _putchar(str[i]);
	}
	return (counter);
}
