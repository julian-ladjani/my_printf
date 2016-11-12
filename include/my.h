/*
** my.h for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Wed Nov  9 13:23:16 2016 julian ladjani
** Last update Sat Nov 12 21:05:44 2016 julian ladjani
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

struct	s_flags
{
  char	flag;
  int	(*fonc)(va_list ap, char *flag, int *count);
}	t_flags;

t_flags	flags[] = {
  {'d', print_int},
  {'i', print_int},
  {'s', print_str},
  {'o', print_oct},
  {'l', print_long},
  {'x', print_hex},
  {'X', print_hexM},
  {'h', print_short},
  {'c', print_char},
  {'p', print_point},
  {'n', print_number},
  {'%', print_percent},
  {'\0', NULL},
};

char	*my_putnbrint(int nb);
char	*my_putnbrlong(long nb);
char	*my_putnbrshort(short nb);
char	*my_putnbrlonglong(long long nb);
char	*my_putnbruint(int nb);
char	*my_putnbrulong(long nb);
char	*my_putnbrushort(short nb);
char	*my_putnbrulonglong(long long nb);
char	*my_convertbase(char *snumber, int base);
char	*my_memsetprintf(char *tempflag, int lenght);
char	*my_revstrprintf(char *str);
char	*prepare_tempflag(char *str, char *tempflag);
char	flag_search(char c);
int	my_printf(char *str, ...);
int	my_strlenprintf(char *str);
int	my_putcharprintf(char c);
int	my_getnbrprintf(char *str);
int	my_getnbrprintfU(char *str);

#ENDIF /* !MY_H_ */
