/*
** my_printf_fonc.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov  7 22:58:21 2016 julian ladjani
** Last update Jan Nov 20 19:30:00 2016 Julian Ladjani
*/

#include "my.h"

void	print_int(va_list ap, char *flag, int *count)
{
  t_mod	moddata;
  char	*str;
  int	i;

  moddata = my_moddata();
  moddata = parse_my_star(flag, moddata, ap);
  i = my_strlenprintf(flag) - 2;
  if (flag[i] == 'l' && flag[i - 1] == 'l')
    str = my_putnbrlonglong(va_arg(ap, long long));
  else if (flag[i] == 'L')
    str = my_putnbrlonglong(va_arg(ap, long long));
  else if (flag[i] == 'l')
    str = my_putnbrlong(va_arg(ap, long));
  else
    str = my_putnbrint(va_arg(ap, int));
  if (*str == '-')
    {
      moddata.nbisneg = 1;
      moddata.firstchar = '-';
    }
  str = edit_my_number(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}

void	print_uint(va_list ap, char *flag, int *count)
{
  t_mod	moddata;
  char	*str;
  int	i;

  moddata = my_moddata();
  moddata = parse_my_star(flag, moddata, ap);
  i = my_strlenprintf(flag) - 2;
  if (flag[i] == 'l' && flag[i - 1] == 'l')
    str = my_putnbrulonglong(va_arg(ap, unsigned long long));
  else if (flag[i] == 'L')
    str = my_putnbrulonglong(va_arg(ap, unsigned long long));
  else if (flag[i] == 'l')
    str = my_putnbrulong(va_arg(ap, unsigned long));
  else
    str = my_putnbruint(va_arg(ap, unsigned int));
  if (*str == '0')
    moddata.nbisneg = 1;
  str = edit_my_unumber(str, flag, moddata);
  count[0] += my_putstrprintf(str);
}

void	print_str(va_list ap, char *flag, int *count)
{
  char	*str;
  char	*str2;
  t_mod	moddata;

  moddata = my_moddata();
  moddata = parse_my_star(flag, moddata, ap);
  str = va_arg(ap, char *);
  if (str == NULL)
    str = "(null)";
  else
    {
      if ((str2 = malloc((my_strlenprintf(str) + 1) * sizeof(char))) == NULL)
	str2 = "(null)";
      else
	{
	  my_strcpyprintf(str2, str);
	  str = edit_my_str(str2, flag, moddata);
	}
    }
  count[0] += my_putstrprintf(str);
}

void	print_char(va_list ap, char *flag, int *count)
{
  char	*str;
  t_mod	moddata;

  moddata = my_moddata();
  moddata = parse_my_star(flag, moddata, ap);
  if ((str = malloc(2 * sizeof(char))) == NULL)
    str = "(null)";
  else
    {
      str[0] = (char) va_arg(ap, int);
      str[1] = '\0';
      str = edit_my_str(str, flag, moddata);
    }
  count[0] += my_putstrprintf(str);
}
