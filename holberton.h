#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct storage - structure that holds information on the buffer
* @size: holds the size to write from the buffer
* @box: pointer to the array
* @start: pointer to the beginning of the array, will not be modified
*/
typedef struct storage
{
	int size;
	char *box;
	char *start;
} mk_buffer;

/**
* struct format - a structure that holds the string to be printed and a format
* checker function pointer
* @format: holds the string to print
* @f: a function pointer
*/
typedef struct format
{
	char *format;
	mk_buffer(*f)(mk_buffer, va_list);
} format_t;

/* Essential functions */
int _printf(const char *format, ...);

/* Conversion specifier functions */
mk_buffer(*get_format(const char *format))(mk_buffer, va_list);
mk_buffer char_fmt(mk_buffer, va_list args);
mk_buffer str_fmt(mk_buffer, va_list args);
mk_buffer int_fmt(mk_buffer, va_list args);
mk_buffer rev_fmt(mk_buffer, va_list args);
mk_buffer rot13_fmt(mk_buffer buffer, va_list args);
mk_buffer upp_hex_fmt(mk_buffer buffer, va_list args);
mk_buffer low_hex_fmt(mk_buffer buffer, va_list args);

/* Helper functions */
unsigned int _strlen(char *str);
mk_buffer rec_digits(int, mk_buffer);

#endif /* _HOLBERTON_H_ */
