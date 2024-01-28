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
* @specifier: Conversion specifier ('c', 's', 'd', 'i', etc.)
* @fn: Pointer to corresponding function
*custom printf function
*/
typedef struct print_fn
{
char specifier;
int (*fn)(va_list, int *);
} print_fn;

/* custom printf function */
int _printf(const char *format, ...);

/* custom conversion specifier functions */
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_b(va_list args);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);
int print_p(va_list args);
int print_plus(va_list args);
int print_space(va_list args);
int print_hash(va_list args);
int print_l(va_list args);
int print_h(va_list args);
int print_width(va_list args);
int print_precision(va_list args);
int print_zero(va_list args);
int print_minus(va_list args);
int print_r(va_list args);
int print_R(va_list args);

#endif /* MAIN_H */
