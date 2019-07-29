#include "holberton.h"

/**
 * function_struct - Entry point
 * @n: pointer
 * Return: Always 0
 */

int (*function_struct(char *n))(va_list)
{
	int counter = 0;

	stc_p stc[] = {
		{ ‘c’, p_charac}
		{ ’s’, p_string}
		{NULL, NULL}
	}

	while (stc[counter]->n)
	{
		if (stc[counter]->n == s)
		{
			return (stc[counter]->f);
		}
		counter++;
	}
	return (NULL);
}
