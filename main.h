#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
* struct print_fn - conversion specifiers with corresponding function
* @specifier: Conversion specifier (e.g., 'c', 's', 'd', etc.)
* @fn: Pointer to the corresponding function
*/

typedef struct print_fn {
char specifier;
int (*fn)(va_list, int *);
} print_fn;

/* Custom printf function */
int _printf(const char *format, ...);

/* Custom conversion specifier functions */

int print_char(char c, int *char_print);
int print_string(char *str, int *char_print);
int print_integer(int num, int *char_print);
int print_binary(unsigned int num, int *char_print);
int print_unsigned(unsigned int num, int *char_print);
int print_binary(unsigned int num, int *char_print);
int print_unsigned(unsigned int num, int *char_print);
int print_octal(unsigned int num, int *char_print);
int print_hexadecimal(unsigned int num, int uppercase, int *char_print);
int print_reversed(char *str, int *char_print);
int print_rot13(char *str, int *char_print);

#endif /* MAIN_H */
