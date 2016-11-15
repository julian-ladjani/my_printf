/*
** my_putnbr.c for my_putnbr in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2021_my_printf_bootstrap
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov  7 15:49:41 2016 julian ladjani
** Last update Mar Nov 15 13:18:56 2016 Julian Ladjani
*/

#include "my.h"

char	*my_putnbrint(int nb)
{
  int	sign;
  int	i;
  char	*result;

  if ((result = malloc(sizeof(nb) * sizeof(char) + 1)) == NULL)
    return ("(NULL)");
  i = -1;
  sign = 0;
  if (nb < 0)
    {
      nb *= -1;
      sign = 1;
    }
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  if (sign == 1)
    result[++i] = '-';
  my_revstrprintf(result);
  return (result);
}

char	*my_putnbrlong(long nb)
{
  int	sign;
  int	i;
  char	*result;

  if ((result = malloc(sizeof(nb) * sizeof(char) + 1)) == NULL)
    return ("(NULL)");
  i = -1;
  sign = 0;
  if (nb < 0)
    {
      nb *= -1;
      sign = 1;
    }
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  if (sign == 1)
    result[++i] = '-';
  my_revstrprintf(result);
  return (result);
}

char	*my_putnbrlonglong(long long nb)
{
  int	sign;
  int	i;
  char	*result;

  if ((result = malloc(sizeof(nb) * sizeof(char) + 1)) == NULL)
    return ("(NULL)");
  i = -1;
  sign = 0;
  if (nb < 0)
    {
      nb *= -1;
      sign = 1;
    }
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  if (sign == 1)
    result[++i] = '-';
  my_revstrprintf(result);
  return (result);
}
