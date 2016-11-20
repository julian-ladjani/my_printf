/*
** mod_fonc2.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction/modifiers
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Apr Nov 16 13:18:36 2016 Julian Ladjani
** Last update Jul Nov 19 21:58:18 2016 Julian Ladjani
*/

#include "my.h"

t_mod		mod_diez(t_mod mod_data)
{
  if (mod_data.nbisneg == 0)
    mod_data.diez = 1;
}

t_mod		mod_zero(t_mod mod_data)
{
  if (mod_data.sub == 0)
    mod_data.zero = 1;
  return (mod_data);
}

t_mod		mod_space(t_mod mod_data)
{
  if (mod_data.add == 0 && mod_data.nbisneg == 0)
    {
      mod_data.space = 1;
      mod_data.firstchar = ' ';
      mod_data.lenght++;
    }
  return (mod_data);
}
