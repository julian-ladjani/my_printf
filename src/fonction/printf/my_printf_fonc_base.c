/*
** my_printf_fonc_base.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sat Nov 12 17:51:57 2016 julian ladjani
** Last update Mar Nov 15 13:08:14 2016 Julian Ladjani
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
  if ((snumber = malloc(lenght * sizeof(char *) + 1)) == NULL)
    return (NULL);
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

void			print_hex(va_list ap, char *flag, int *count)
{
  char			*str;

  str = my_putnbrulonglong(va_arg(ap, long long));
  my_convertbase(str, 16, "0123456789abcdef");
  edit_my_base(str, flag);
  count[0] += my_putstrprintf(str);
}

void			print_hexM(va_list ap, char *flag, int *count)
{
  char			*str;

  str = my_putnbrulonglong(va_arg(ap, long long));
  my_convertbase(str, 16, "0123456789ABCDEF");
  edit_my_base(str, flag);
  count[0] += my_putstrprintf(str);
}

void			print_oct(va_list ap, char *flag, int *count)
{
  char			*str;

  str = my_putnbrulonglong(va_arg(ap, long long));
  my_convertbase(str, 8, "01234567");
  edit_my_base(str, flag);
  count[0] += my_putstrprintf(str);
}

void			print_bin(va_list ap, char *flag, int *count)
{
  char			*str;

  str = my_putnbrulonglong(va_arg(ap, long long));
  my_convertbase(str, 2, "01");
  edit_my_base(str, flag);
  count[0] += my_putstrprintf(str);
}
