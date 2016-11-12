/*
** usefull_foncs2.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Sat Nov 12 18:23:56 2016 julian ladjani
** Last update Sat Nov 12 18:28:25 2016 julian ladjani
*/

int	my_getnbrprintf(char *str)
{
  int	number;
  int	digit;
  int	counter;

  number = 1;
  digit = 0;
  counter = 0;
  while (str == '+' || *str == '-' && *str != '\0')
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

int		my_getnbrprintfU(char *str)
{
  unsigned int	digit;
  int		counter;

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
