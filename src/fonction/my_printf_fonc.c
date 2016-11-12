/*
** my_printf_fonc.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 22:58:21 2016 julian ladjani
** Last update Sat Nov 12 20:48:53 2016 julian ladjani
*/

#include "my.h"

va_arg	print_short(va_arg ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrshort(va_arg(ap, short));
  if (flag[1] == '-')
  return (ap);
}

va_arg	print_int(va_arg ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrint(va_arg(ap, int));
  return (ap);
}

va_arg	print_long(va_arg ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrlong(va_arg(ap, long));
  return (ap);
}

va_arg	print_str(va_arg ap, char *flag, int *count)
{
  count += my_putstrprintf(va_arg(ap, char *));
  return (ap);
}
