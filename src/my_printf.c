/*
** my_printf.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 22:36:45 2016 julian ladjani
** Last update Sun Nov 13 14:12:42 2016 julian ladjani
*/

#include "my.h"

t_flags		flags[] = {
  {'d', print_int},
  {'i', print_int},
  {'s', print_str},
  {'o', print_oct},
  {'l', print_long},
  {'x', print_hex},
  {'X', print_hexM},
  {'h', print_short},
  {'c', print_char},
  {'p', print_point},
  {'n', print_number},
  {'%', print_percent},
  {'\0', NULL},
};


int		my_printf(char *str, ...)
{
  va_list	ap;
  char		*tempflag;
  int		count[1];
  
  count[0] = 0;
  va_start(ap, str);
  while (*str != '\0')
    {
      if (*str == '%')
	{
	  str++;
	  tempflag = malloc(my_strlenprintf(str) * sizeof(char));
	  prepare_tempflag(str, tempflag);
	  flags[flag_search(*str)].fonc(ap, tempflag, count);
	  free(tempflag);
	}
      else
	count[0] += my_putcharprintf(*str);
      str++;
    }
  va_end(ap);
  return (count[0]);
}

char		*prepare_tempflag(char *str, char *tempflag)
{
  int		i;

  i = 0;
  str++;
  while (flag_search(*str) == -1 && *str != '\0')
    {
      tempflag[++i] = *str;
      str++;
    }
}

int		flag_search(char c)
{
  int		i;
  i = 0;
  while (flags[i].flag != '\0')
    {
      if (flags[i].flag == c)
	return (i);
      i++;
    }
  return (-1);
}
