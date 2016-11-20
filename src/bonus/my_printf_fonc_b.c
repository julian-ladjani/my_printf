/*
** my_printf_fonc_b.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/bonus
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sun Nov 13 13:09:50 2016 julian ladjani
** Last update Jan Nov 20 00:47:24 2016 Julian Ladjani
*/

#include "my.h"

void		print_number(va_list ap, char *flag, int *count)
{
  int		*adress;

  ap = ap;
  flag = flag;
  if ((adress = va_arg(ap, int *)) != NULL)
    *adress = count[0];
}
