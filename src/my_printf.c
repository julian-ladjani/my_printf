/*
** my_printf.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov  7 22:36:45 2016 julian ladjani
** Last update Jan Nov 20 01:32:28 2016 Julian Ladjani
*/

#include "my.h"

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		count[1];
  t_flags	*flags;

  flags = my_flags();
  count[0] = 0;
  if (flags == NULL)
    return (count[0]);
  va_start(ap, str);
  while (*str != '\0')
    {
      if (*str == '%' && *str != '\0')
	{
	  if ((str = it_detect_per(flags, count, str, ap)) == NULL)
	    return (count[0]);
	}
      else if (str != '\0')
	count[0] += my_putcharprintf(*str);
      if (str != '\0')
	str++;
    }
  va_end(ap);
  return (count[0]);
}

char		*it_detect_per(t_flags *flags, int *count, char *str, va_list ap)
{
  char		*tempflag;

  str++;
  if ((tempflag = malloc((my_strlenprintf(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  str = checkismod(str, tempflag);
  if (*str != '\0')
    flags[flag_search(*str)].fonc(ap, tempflag, count);
  free(tempflag);
  return (str);
}

int		flag_search(char c)
{
  int		i;
  t_flags	*flags;

  flags = my_flags();
  if (flags == NULL)
    return (13);
  i = 0;
  while (i < 13)
    {
      if (flags[i].flag == c)
	return (i);
      i++;
    }
  free (flags);
  return (13);
}

char		*checkismod(char *str, char *tempflag)
{
  char		*modifier;
  int		i;
  int		j;

  modifier = "0123456789-+ .*lh#I'LjZt\0";
  i = 0;
  j = 0;
  while (modifier[i] != '\0')
    {
      if (*str == modifier[i] && *str != '\0')
	{
	  tempflag[j] = *str;
	  i = 0;
	  str++;
	  j++;
	}
      else
	i++;
    }
  tempflag[j] = *str;
  tempflag[++j] = '\0';
  return (str);
}
