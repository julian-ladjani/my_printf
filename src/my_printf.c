/*
** my_printf.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 22:36:45 2016 julian ladjani
** Last update Sat Nov 12 20:51:05 2016 julian ladjani
*/

#include "my.h"

int		my_printf(char *str, ...)
{
  va_list	ap;
  char		*tempflag;
  int		*count[1];
  
  tempflag = malloc(my_strlen(str) * sizeof(char));
  count[0] = 0;
  va_start(ap, str);
  while (*str != '\0')
    {
      count[0] += my_putchar(*str);
      if (*str == '%')
	{
	  prepare_tempflag(str, tempflag);
	  ap = flags[flag_search(*str)]->fonc(ap, tempflag, count);
	  my_memsetprintf(tempflag, my_strlen(str));
	}
      str++;
    }
  va_end(ap);
}

char	*prepare_tempflag(char *str, char *tempflag)
{
  int	i;

  i = 0;
  str++;
  while (flag_search(*str) == '0' && *str != '\0')
    {
      tempflag[++i] = *str;
      str++;
    }
}

char	flag_search(char c)
{
  int	i;

  i = 0;
  while (flags[i][0] != '\0')
    {
      if (flags[i][0] == 'c')
	return (c);
    }
  return ('0');
}
