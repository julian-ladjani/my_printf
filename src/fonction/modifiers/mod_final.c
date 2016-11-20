/*
** my_printf_mod.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov 14 15:34:16 2016 julian ladjani
** Last update Jan Nov 20 19:10:05 2016 Julian Ladjani
*/

#include "my.h"

char	*edit_my_number(char *number, char *mod, t_mod moddata)
{
  moddata.lenght += my_strlenprintf(number);
  moddata = parse_my_mod(mod, moddata);
  if (moddata.firstchar != 'n' && moddata.firstchar != '-')
    moddata.lenght++;
  if (moddata.lenght < moddata.nbmin)
    number = my_realloc(number, moddata.nbmin);
  if (moddata.firstchar != 'n' && moddata.firstchar != '-')
    my_strcatprintfinv(number, moddata.firstchar);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.zero == 1)
	number = my_strcatprintfinv(number, '0');
      else if (moddata.sub == 0)
	number = my_strcatprintfinv(number, ' ');
      else
	number = my_strcatprintf(number, " ");
      moddata.lenght++;
    }
  return (number);
}

char	*edit_my_unumber(char *number, char *mod, t_mod moddata)
{
  moddata.lenght = my_strlenprintf(number);
  moddata = parse_my_mod(mod, moddata);
  if (moddata.lenght < moddata.nbmin)
    number = my_realloc(number, moddata.nbmin);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.zero == 1)
	number = my_strcatprintfinv(number, '0');
      else if (moddata.sub == 0)
	number = my_strcatprintfinv(number, ' ');
      else
	number = my_strcatprintf(number, " ");
      moddata.lenght++;
    }
  return (number);
}

char	*edit_my_str(char *str, char *mod, t_mod moddata)
{
  moddata = parse_my_mod(mod, moddata);
  moddata.lenght = my_strlenprintf(str);
  if (moddata.nbmax != 0 && moddata.lenght > moddata.nbmax)
    {
      str = reduce_mypfstring(str, moddata.nbmax);
      moddata.lenght = my_strlenprintf(str);
    }
  if (moddata.lenght < moddata.nbmin)
    str = my_realloc(str, moddata.nbmin);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.sub == 0)
	str = my_strcatprintfinv(str, ' ');
      else
	str = my_strcatprintf(str, " ");
      moddata.lenght++;
    }
  return (str);
}

char	*edit_my_base(char *number, char *mod, t_mod moddata)
{
  moddata.lenght = my_strlenprintf(number);
  moddata = parse_my_mod(mod, moddata);
  printf("diez %d\n", moddata.diez);
  if (moddata.lenght < moddata.nbmin)
    number = my_realloc(number, moddata.nbmin);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.zero == 1)
	number = my_strcatprintfinv(number, '0');
      else if (moddata.sub == 0)
	number = my_strcatprintfinv(number, ' ');
      else
	number = my_strcatprintf(number, " ");
      moddata.lenght++;
    }
  if (moddata.diez == 1)
    {
      if (moddata.type != 'n')
	number = my_strcatprintfinv(number, moddata.type);
      number = my_strcatprintfinv(number, '0');
    }
  return (number);
}

char	*edit_my_point(char *point, char *mod, t_mod moddata)
{
  moddata.lenght = my_strlenprintf(point);
  moddata = parse_my_mod(mod, moddata);
  if (moddata.lenght < moddata.nbmin)
    point = my_realloc(point, moddata.nbmin);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.sub == 0)
	point = my_strcatprintfinv(point, ' ');
      else
	point = my_strcatprintf(point, " ");
      moddata.lenght++;
    }
  return (point);
}
