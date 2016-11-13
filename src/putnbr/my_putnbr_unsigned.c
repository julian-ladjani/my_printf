/*
** my_putnbr.c for my_putnbr in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2021_my_printf_bootstrap
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 15:49:41 2016 julian ladjani
** Last update Sat Nov 12 21:26:40 2016 julian ladjani
*/

#include "my.h"

char	*my_putnbruint(unsigned int nb)
{
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
  i = -1;
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  my_revstrprintf(result);
  return(result);
}

char	*my_putnbrulong(unsigned long nb)
{
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
  i = -1;
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  my_revstrprintf(result);
  return(result);
}

char	*my_putnbrushort(unsigned short nb)
{
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
  i = -1;
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  my_revstrprintf(result);
  return(result);
}

char	*my_putnbrulonglong(unsigned long long nb)
{
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
  i = -1;
  while (nb > 0)
    {
      result[++i] = ((nb % 10) + 48);
      nb /= 10;
    }
  my_revstrprintf(result);
  return(result);
}
