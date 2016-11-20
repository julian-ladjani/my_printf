/*
** my_printf_fonc2.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sun Nov 13 13:32:20 2016 julian ladjani
** Last update May Nov 17 13:13:04 2016 Julian Ladjani
*/

#include "my.h"

void	print_point(va_list ap, char *flag, int *count)
{
  char	*str;

  str = my_putnbrulonglong(va_arg(ap, long long));
  str = my_convertbase(str, 16, "0123456789abcdef");
  edit_my_point(str, flag);
  count[0] += my_putstrprintf(str);
}

void	print_wrong(va_list ap, char *flag, int *count)
{
  count[0] += my_putcharprintf('%');
  count[0] += my_putstrprintf(flag);
}

void	print_percent(va_list ap, char *flag, int *count)
{
  ap = ap;
  flag = flag;
  count[0] += my_putcharprintf('%');
}

void	print_S(va_list ap, char *flag, int *count)
{
  char	*str;

  str = va_arg(ap, char *);
  while (*str != '\0')
    {
      if (*str < 32)
	print_Soct(*str, count);
      else
	count[0] += my_putcharprintf(*str);
      str++;
    }
}

void	print_Soct(char c, int *count)
{
  char	*str;
  int	i;

  str = my_putnbrulonglong(c);
  str = my_convertbase(str, 8, "01234567");
  i = my_strlenprintf(str);
  count[0] += my_putcharprintf('\\');
  while (i < 3)
    {
      count[0] += my_putcharprintf('0');
      i++;
    }
  count[0] += my_putstrprintf(str);
}
