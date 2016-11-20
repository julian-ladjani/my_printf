/*
** mod_check_fonc.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Mar Nov 15 20:00:29 2016 Julian Ladjani
** Last update Jan Nov 20 19:17:26 2016 Julian Ladjani
*/

#include "my.h"

t_mod		my_moddata()
{
  t_mod		mod_data;

  mod_data.add = 0;
  mod_data.sub = 0;
  mod_data.star = 0;
  mod_data.nbmin = 0;
  mod_data.nbmax = 0;
  mod_data.lenght = 0;
  mod_data.nbisneg = 0;
  mod_data.space = 0;
  mod_data.diez = 0;
  mod_data.zero = 0;
  mod_data.dot = 0;
  mod_data.firstchar = 'n';
  mod_data.type = 'n';
  return (mod_data);
}

int		mod_search(char c)
{
  int		i;
  t_modinit	*mod;

  mod = my_mod(mod);
  if (mod == NULL)
    return (0);
  i = 0;
  while (i < 7)
    {
      if (mod[i].flag == c)
	return (i);
      i++;
    }
  free(mod);
  return (0);
}

t_modinit	*my_mod(t_modinit *mod)
{
  if ((mod = malloc(15 * sizeof(t_mod))) == NULL)
    return (NULL);
  my_setmod(mod);
  my_setmodfoncs(mod);
  return (mod);
}

t_modinit	*my_setmod(t_modinit *mod)
{
  mod[0].flag = '+';
  mod[1].flag = '-';
  mod[2].flag = '*';
  mod[3].flag = '.';
  mod[4].flag = ' ';
  mod[5].flag = '#';
  mod[6].flag = '0';
  return (mod);
}

t_modinit	*my_setmodfoncs(t_modinit *mod)
{
  mod[0].fonc = &mod_add;
  mod[1].fonc = &mod_sub;
  mod[2].fonc = &mod_star;
  mod[3].fonc = &mod_dot;
  mod[4].fonc = &mod_space;
  mod[5].fonc = &mod_diez;
  mod[6].fonc = &mod_zero;
  return (mod);
}
