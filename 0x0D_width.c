#include "main.h"
/**
 * get_width - calculates the width to print
 * @format: format string to print the args.
 * @i: list of printed args  
 * @list: list of args
 *
 * Return: width
 */
int get_width(const char *format, int *i, va_list list)
{
	int current_i;
	int w = 0;
	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		if (isxdigit(format[current_i]))
		{
			w *= 10;
			w += format[current_i] - '0';
		}
		else if (format[current_i] == '*')
		{
			current_i++;
			w = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = current_i - 1;
	return (w);
}
