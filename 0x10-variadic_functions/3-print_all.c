#include "variadic_functions.h"

/**
 * format_char - for char
 * @separator: str separator
 * @ap: arg ptr
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - for int
 * @separator: str separator
 * @ap: arg ptr
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - for float
 * @separator: str separator
 * @ap: arg ptr
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_str - for str
 * @separator: str separator
 * @ap: arg ptr
 */
void format_str(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
	printf("%s%s", separator, s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_str},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
