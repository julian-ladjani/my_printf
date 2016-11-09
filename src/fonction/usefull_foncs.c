/*
** my_putnbr.c for my_putnbr in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2021_my_printf_bootstrap
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Mon Nov  7 15:49:41 2016 julian ladjani
** Last update Tue Nov  8 12:46:48 2016 julian ladjani
*/

char	*my_revstr(char *str)
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

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
