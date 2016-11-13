/*
** my_printf_fonc_base.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Sat Nov 12 17:51:57 2016 julian ladjani
** Last update Sun Nov 13 13:08:30 2016 julian ladjani
*/

#include "my.h"

char		*my_convertbase(char *snumber, int base)
{
  unsigned int	number;
  char		*baseconf;
  unsigned int	number2;
  int		lenght;

  lenght = 0;
  baseconf = "0123456789abcdef";
  number = my_getnbrprintfU(snumber);
  number2 = number;
  while (number2 != 0)
    {
      number2 /= 2;
      lenght++;
    }
  snumber = malloc(lenght * sizeof(char *) + 1);
  lenght = 0;
  while (number != 0)
    {
      snumber[lenght] = baseconf[number % base];
      number /= base;
      lenght++;
    }
  my_revstrprintf(snumber);
  return (snumber);
}

void		print_hex(va_list ap, char *flag, int *count)
{
  
}

void		print_hexM(va_list ap, char *flag, int *count)
{

}

void		print_oct(va_list ap, char *flag, int *count)
{

}
