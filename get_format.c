#include "holberton.h"

mk_buffer (*get_format(const char *format))(mk_buffer buffer, va_list)
{
	/* Variable declaration */
	int i;
	format_t formats[] = {
	{"c", char_fmt},
	{"s", str_fmt},
	{"d", int_fmt},
	{"i", int_fmt},
	{NULL, NULL}
	};

	/* Variable initialization */
	i = 0;

	/* Match conversion specifier to correct function */
	while (formats[i].format[0])
	{
		/* If match is found return pointer to correct function */
		if (*format == formats[i].format[0])
		{
			return (formats[i].f);
		}

		i++;
	}

	return (NULL);
}