/*
** my_printf_fonc_b.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/bonus
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sun Nov 13 13:09:50 2016 julian ladjani
** Last update Mar Nov 15 17:30:34 2016 Julian Ladjani
*/

#include "my.h"

void		print_number(va_list ap, char *flag, int *count)
{
  int		*adress;

  adress = va_arg(ap, long long);
  *adress = count[0];
}
