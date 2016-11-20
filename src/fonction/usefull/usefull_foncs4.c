/*
** usefull_foncs4.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction/usefull
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Jan Nov 20 03:10:15 2016 Julian Ladjani
** Last update Jan Nov 20 03:37:19 2016 Julian Ladjani
*/

#include "my.h"

char	*my_strncpyprintf(char *dest, char *src, int n)
{
  int	c;

  c = 0;
  while (n > 0 && src[c] != '\0')
    {
      dest[c] = src[c];
      c++;
      n--;
    }
  dest[c] = '\0';
  return (dest);
}

char	*reduce_mypfstring(char *str, int n)
{
  char	*newstr;

  if ((newstr = malloc((n + 1) * sizeof(char))) == NULL)
    newstr = "(null)";
  else
    my_strncpyprintf(newstr, str, n);
  free (str);
  return (newstr);
}
