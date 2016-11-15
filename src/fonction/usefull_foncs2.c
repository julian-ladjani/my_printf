/*
** usefull_foncs2.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Sat Nov 12 18:23:56 2016 julian ladjani
** Last update Feb Nov 14 20:53:28 2016 Julian Ladjani
*/

#include "my.h"

int			my_getnbrprintf(char *str)
{
  int			number;
  int			digit;
  int			counter;

  number = 1;
  digit = 0;
  counter = 0;
  while (*str == '+' || *str == '-' && *str != '\0')
    {
      if (*str == '-')
	number = number * -1;
      str++;
    }
  while (*str >= '0' && *str <= '9' && *str != '\0')
    {
      digit = digit * 10;
      digit = digit + *str - 48;
      str++;
      counter++;
    }
  digit = digit * number;
  if ((digit < 0 && number > 0) || (digit > 0 && number < 0) || counter > 10)
    digit = 0;
  return (digit);
}

int			my_getnbrprintfU(char *str)
{
  unsigned long long	digit;
  int			counter;

  digit = 0;
  counter = 0;
  while (*str >= '0' && *str <= '9' && *str != '\0')
    {
      digit = digit * 10;
      digit = digit + *str - 48;
      str++;
      counter++;
    }
  return (digit);
}

char			*my_strupcaseprintf(char *str)
{
  int			c;

  c = 0;
  while (str[c] != '\0')
    {
      if (str[c] > 96 && str[c] < 123)
	str[c] = (str[c] - 32);
      c++;
    }
  return (str);
}

int			my_char_parprintf(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= 'a' && c <= 'z')
    return (2);
  else if (c >= '0' && c <= '9')
    return (3);
  return (0);
}

int			my_putstrnprintf(char *str, int nb)
{
  write(1, str, nb);
  return (nb);
}
