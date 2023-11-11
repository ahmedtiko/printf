#include <stdarg.h>
typedef struct {
/* Add any additional parameters if needed */
} params_t;
/**
 * print_char - Print a character
 * @ap: va_list containing the character to print
 * @params: Additional parameters (if needed)
 *
 * Return: Number of characters printed
 */
int print_char(va_list ap, params_t *params)
{
_putchar(va_arg(list, int));
	return (1);
}
