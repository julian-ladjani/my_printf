/*
** my_flag.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov 14 14:20:05 2016 julian ladjani
** Last update Jan Nov 20 18:44:57 2016 Julian Ladjani
*/

#include "my.h"

t_flags		*my_flags()
{
  t_flags	*flags;

  if ((flags = malloc(15 * sizeof(t_flags))) == NULL)
    return (NULL);
  my_setflags(flags);
  my_setfoncs(flags);
  return (flags);
}

t_flags		*my_setflags(t_flags *flags)
{
  flags[0].flag = 'd';
  flags[1].flag = 'i';
  flags[2].flag = 's';
  flags[3].flag = 'o';
  flags[4].flag = 'x';
  flags[5].flag = 'X';
  flags[6].flag = 'c';
  flags[7].flag = 'p';
  flags[8].flag = 'n';
  flags[9].flag = '%';
  flags[10].flag = 'u';
  flags[11].flag = 'S';
  flags[12].flag = 'b';
  flags[13].flag = '!';
  return (flags);
}

t_flags		*my_setfoncs(t_flags *flags)
{
  flags[0].fonc = &print_int;
  flags[1].fonc = &print_int;
  flags[2].fonc = &print_str;
  flags[3].fonc = &print_oct;
  flags[4].fonc = &print_hex;
  flags[5].fonc = &print_hexm;
  flags[6].fonc = &print_char;
  flags[7].fonc = &print_point;
  flags[8].fonc = &print_number;
  flags[9].fonc = &print_percent;
  flags[10].fonc = &print_uint;
  flags[11].fonc = &print_s;
  flags[12].fonc = &print_bin;
  flags[13].fonc = &print_wrong;
  return (flags);
}
