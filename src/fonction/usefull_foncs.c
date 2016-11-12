/*
** my_putnbr.c for my_putnbr in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2021_my_printf_bootstrap
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 15:49:41 2016 julian ladjani
** Last update Sat Nov 12 20:18:31 2016 julian ladjani
*/


char	*my_revstrprintf(char *str)
{
  int	c;
  int	c2;
  char	strtemp;

  c = 0;
  c2 = 0;
  while (str[c] != '\0')
    c++;
  c--;
  while (c > c2)
    {
      strtemp = str[c2];
      str[c2] = str[c];
      str[c] = strtemp;
      c2++;
      c--;
    }
  return (str);
}

int	my_strlenprintf(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

int	my_putcharprintf(char c)
{
  write(1, &c, 1);
  return (1);
}

int	my_putstrprintf(char *str)
{
  write(1, str, my_strlenprintf(str));
  return (my_strlenprintf(str));
}

char	*my_memsetprintf(char *tempflag, int lenght)
{
  int	i;

  i = -1;
  while (++i < lenght)
    tempflag[i] = '0';
  return (tempflag);
}
