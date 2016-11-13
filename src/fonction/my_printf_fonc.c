/*
** my_printf_fonc.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 22:58:21 2016 julian ladjani
** Last update Sun Nov 13 14:10:25 2016 julian ladjani
*/

#include "my.h"

void	print_short(va_list ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrshort((short) va_arg(ap, int));
}

void	print_int(va_list ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrint(va_arg(ap, int));
}

void	print_long(va_list ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrlong(va_arg(ap, long));
}

void	print_str(va_list ap, char *flag, int *count)
{
  count[0] += my_putstrprintf(va_arg(ap, char *));
}

void	print_char(va_list ap, char *flag, int *count)
{
  count[0] += my_putcharprintf((char) va_arg(ap, int));
}
