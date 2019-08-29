/**
 * p_binarie - print a decimal base 10
 *
 * @type: store a list of numbers
 *
 * Return: a decimal number
 */
int p_binarie(va_list type)
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
	for (c_units = 1; temp > 1; c_units++)
	{
		temp = temp / 2;
		dec = dec * 2;
	}
	for (i = 1; i <= c_units; i++)
	{
		digit = num / dec;
		num = num % dec;
		dec = dec / 2;
		_putchar(digit + '0');
		counter++;
	}
	return (counter);
}
