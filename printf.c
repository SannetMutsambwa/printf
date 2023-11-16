#include "main.h"
/**
* _printf - Custom printf function
* @format: Format string containing format specifiers
* Description: This function prints formatted output to stdout.
* Return: Number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_of_args;
if (format == NULL)
return (-1);
va_start(list_of_args, format);
while (*format)
{
if (*format != '%')
{
char temp[2];
temp[0] = *format;
temp[1] = '\0';
fputs(temp, stdout);
char_print++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == 'c')
{
char c = va_arg(list_of_args, int);
char temp[2];
temp[0] = c;
temp [1] = '\0';
fputs(temp, stdout);
char_print++;
}
else if (*format == 's')
{
char *str = va_arg(list_of_args, char *);
int str_len = strlen(str);
fputs(str, stdout);
char_print += str_len;
}
}
format++;
}
va_end(list_of_args);
return (char_print);
}
