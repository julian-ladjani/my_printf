/*
** mod_fonc1.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction/modifiers
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Apr Nov 16 13:18:27 2016 Julian Ladjani
** Last update Jan Nov 20 18:45:19 2016 Julian Ladjani
*/

#include "my.h"

t_mod		parse_my_mod(char *var, t_mod mod_data)
{
  t_modinit	*mod;
  int		i;

  i = 0;
  mod = my_mod(mod);
  while (var[i + 1] != '\0')
    {
      if (var[i] > '0' && var[i] <= '9')
	{
	  if (i != 0 && var[i - 1] == '.' && mod_data.nbmax == 0)
	    mod_data.nbmax = my_getnbrprintfu(var + i);
	  else if (mod_data.nbmin == 0)
	    mod_data.nbmin = my_getnbrprintfu(var + i);
	  while (var[i] >= '0' && var[i] <= '9')
	    i++;
	}
      else
	mod_data = mod[mod_search(var[i])].fonc(mod_data);
      i++;
    }
  return (mod_data);
}

t_mod		parse_my_star(char *var, t_mod mod_data, va_list ap)
{
  t_modinit	*mod;
  int		i;

  i = 0;
  mod = my_mod(mod);
  while (var[i + 1] != '\0')
    {
      if (var[i] == '*')
	{
	  if (i != 0 && var[i - 1] == '.' && mod_data.nbmax == 0)
	    mod_data.nbmax = va_arg(ap, int);
	  else if (mod_data.nbmin == 0)
	    mod_data.nbmin = va_arg(ap, int);
	  while (var[i] >= '0' && var[i] <= '9')
	    i++;
	}
      i++;
    }
  return (mod_data);
}

t_mod		mod_add(t_mod mod_data)
{
  mod_data.space = 0;
  if (mod_data.nbisneg == 0 && mod_data.add == 0)
    {
      mod_data.add = 1;
      mod_data.firstchar = '+';
    }
  return (mod_data);
}

t_mod		mod_sub(t_mod mod_data)
{
  mod_data.sub = 1;
  mod_data.zero = 0;
  return (mod_data);
}

t_mod		mod_star(t_mod mod_data)
{
  mod_data.star = 1;
  return (mod_data);
}
