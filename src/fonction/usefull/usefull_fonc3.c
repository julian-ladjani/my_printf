/*
** usefull_fonc3.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction/usefull
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Apr Nov 16 17:43:09 2016 Julian Ladjani
** Last update Jul Nov 19 18:38:19 2016 Julian Ladjani
*/

#include "my.h"

char	*my_realloc(char *str, int lenght)
{
  char	*strnew;
  int	oldlenght;

  oldlenght = my_strlenprintf(str);
  lenght = (lenght + oldlenght) * sizeof(char);
  if ((strnew = malloc(lenght)) == NULL)
    return (NULL);
  my_strcpyprintf(strnew, str);
  free (str);
  return (strnew);
}

int		my_str_isnum(char *str)
{
  while (*str != '\0')
    {
      if (*str < 48 || *str > 57)
	return (0);
      str++;
    }
  return (1);
}

char	*my_strcpyprintf(char *dest, char *src)
{
  int	c;

  c = 0;
  while (src && src[c] != '\0')
    {
      dest[c] = src[c];
      c++;
    }
  dest[c] = '\0';
  return (dest);
}

char	*my_strcatprintf(char *dest, char *src)
{
  my_strcpyprintf(dest + my_strlenprintf(dest), src);
  return (dest);
}

char	*my_strcatprintfinv(char *dest, char c)
{
  int	len;
  char	tmp;
  int	i;
  char	src[2];

  i = 0;
  src[0] = c;
  src[1] = '\0';
  if ((dest[0] == '-' || dest[0] == '+') && src[0] == '0')
    i = 1;
  my_strcpyprintf(dest + my_strlenprintf(dest), src);
  len = my_strlenprintf(dest) - 1;
  while (i < len)
    {
      tmp = dest[len];
      dest[len] = dest[i];
      dest[i] = tmp;
      i++;
    }
  return (dest);
}
