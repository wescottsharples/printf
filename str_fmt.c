#include "holberton.h"

/**
 * str_fmt - Handles conversion specifier "s"
 * @buffer: Pointer to struct buffer
 * @args: the string to be printed
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer str_fmt(mk_buffer buffer, va_list args)
{
	char *str;

	str = va_arg(args, char *);

	while (*str)
	{
		*buffer.box = *str;

		buffer.size += 1;
		buffer.box++;
		str++;
	}
	buffer.box--;
	return (buffer);
}
