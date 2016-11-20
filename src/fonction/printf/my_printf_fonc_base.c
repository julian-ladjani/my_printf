/*
** my_printf_fonc_base.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sat Nov 12 17:51:57 2016 julian ladjani
** Last update Jan Nov 20 18:19:35 2016 Julian Ladjani
*/

#include "my.h"

char			*my_convertbase(char *snumber, int base, char *baseconf)
{
  unsigned long long	number;
  unsigned long long	number2;
  int			lenght;

  lenght = 0;
  number = my_getnbrprintfU(snumber);
  number2 = number;
  while (number2 != 0)
    {
      number2 /= 2;
      lenght++;
    }
  if ((snumber = malloc(lenght * sizeof(char *) + 3)) == NULL)
    return (NULL);
  lenght = 0;
  while (number != 0)
    {
      snumber[lenght] = baseconf[number % base];
      number /= base;
      lenght++;
    }
  snumber[lenght] = '\0';
  my_revstrprintf(snumber);
  return (snumber);
}

void			print_hex(va_list ap, char *flag, int *count)
{
  char			*str;
  t_mod			moddata;

  str = my_putnbrulonglong(va_arg(ap, long long));
  str = my_convertbase(str, 16, "0123456789abcdef");
  str = edit_my_base(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}

void			print_hexM(va_list ap, char *flag, int *count)
{
  char			*str;
  t_mod			moddata;

  str = my_putnbrulonglong(va_arg(ap, long long));
  str = my_convertbase(str, 16, "0123456789ABCDEF");
  str = edit_my_base(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}

void			print_oct(va_list ap, char *flag, int *count)
{
  char			*str;
  t_mod			moddata;

  str = my_putnbrulonglong(va_arg(ap, long long));
  str = my_convertbase(str, 8, "01234567");
  str = edit_my_base(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}

void			print_bin(va_list ap, char *flag, int *count)
{
  char			*str;
  t_mod			moddata;

  str = my_putnbrulonglong(va_arg(ap, long long));
  str = my_convertbase(str, 2, "01");
  str = edit_my_base(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}
