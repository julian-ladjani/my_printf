/*
** my_putnbr.c for my_putnbr in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2021_my_printf_bootstrap
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 15:49:41 2016 julian ladjani
** Last update Mon Nov  7 23:39:26 2016 julian ladjani
*/

char	*my_putnbr(int nb)
{
  int	sign;
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
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
  my_revstr(result);
  return(result);
}

char	*my_putnbrlong(long nb)
{
  int	sign;
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
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
  my_revstr(result);
  return(result);
}

char	*my_putnbrshort(short nb)
{
  int	sign;
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
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
  my_revstr(result);
  return(result);
}

char	*my_putnbrlonglong(long long nb)
{
  int	sign;
  int	i;
  char	*result;

  result = malloc(sizeof(nb) * sizeof(char) + 1);
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
  my_revstr(result);
  return(result);
}
