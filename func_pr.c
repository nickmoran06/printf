#include "holberton.h"

/**
 * p_charac - print a character
 *
 * @type: store a list of characters
 *
 * Return: the character
 */
int p_charac(va_list type)
{
	int ch = va_arg(type, int);
	int counter = 0;

	counter += _putchar(ch);
	return (counter);
}

/**
 * p_string - print a character
 *
 * @type: store a list of characters
 *
 * Return: the store of the amount of character variable
 */
int p_string(va_list type)
{
	int counter = 0;
	int i = 0;
	char *str;

	str = va_arg(type, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		counter += _putchar(str[i]);
	return (counter);
}

/**
 * p_decimal - print a decimal base 10
 *
 * @type: store a list of numbers
 *
 * Return: a decimal number
 */
int p_decimal(va_list type)
{
	unsigned int temp, dec, c_units, i, digit;
	int num = 1, counter = 0;

	num = va_arg(type, unsigned int);
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		counter++;
	}
	temp = num;
	dec = 1;
	for (c_units = 1; temp > 9; c_units++)
	{
		temp = temp / 10;
		dec = dec * 10;
	}
	for (i = 1; i <= c_units; i++)
	{
		digit = num / dec;
		num = num % dec;
		dec = dec / 10;
		_putchar(digit + '0');
		counter++;
	}
	return (counter);
}
/**
 * p_integer - print a decimal base 10
 *
 * @type: store a list of numbers
 *
 * Return: a decimal number
 */
int p_integer(va_list type)
{
	return (p_decimal(type));
}

/**
 * p_octal - print a decimal base 10
 *
 * @type: store a list of numbers
 *
 * Return: a decimal number
 */
int p_octal(va_list type)
{
	unsigned int temp, dec, c_units, i, digit;
	int num = 1, counter = 0;

	num = va_arg(type, unsigned int);
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		counter++;
	}
	temp = num;
	dec = 1;
	for (c_units = 1; temp > 7; c_units++)
	{
		temp = temp / 8;
		dec = dec * 8;
	}
	for (i = 1; i <= c_units; i++)
	{
		digit = num / dec;
		num = num % dec;
		dec = dec / 8;
		_putchar(digit + '0');
		counter++;
	}
	return (counter);
}
