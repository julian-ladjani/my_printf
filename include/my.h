/*
** my.h for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Wed Nov  9 13:23:16 2016 julian ladjani
** Last update Jan Nov 20 18:14:21 2016 Julian Ladjani
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#include <stdio.h>

typedef struct	s_flags
{
  char		flag;
  void		(*fonc)(va_list ap, char *flag, int *count);
}		t_flags;

typedef struct	s_mod
{
  int		add;
  int		sub;
  int		star;
  int		nbmin;
  int		nbmax;
  int		nbisneg;
  int		lenght;
  int		space;
  int		diez;
  int		zero;
  int		dot;
  char		firstchar;
  char		type;
}		t_mod;

typedef struct	s_modinit
{
  char		flag;
  t_mod		(*fonc)(t_mod mod);
}		t_modinit;

char		*my_putnbrint(int nb);
char		*my_putnbrlong(long nb);
char		*my_putnbrlonglong(long long nb);
char		*my_putnbruint(unsigned int nb);
char		*my_putnbrulong(unsigned long nb);
char		*my_putnbrulonglong(unsigned long long nb);
char		*my_putnbrusize(size_t nb);

char		*my_convertbase(char *snumber, int base, char *baseconf);
char		*my_memsetprintf(char *tempflag, int lenght);
char		*my_revstrprintf(char *str);
char		*my_realloc(char *str, int lenght);
char		*my_strcpyprintf(char *dest, char *src);
char		*my_strncpyprintf(char *dest, char *src, int n);
char		*reduce_mypfstring(char *str, int n);

char		*prepare_tempflag(char *str, char *tempflag);
char		*checkismod(char *str, char *tempflag);
char		*it_detect_per(t_flags *flags, int *count, char *str, va_list ap);
int		flag_search(char c);

int		my_printf(char *str, ...);
int		my_strlenprintf(char *str);
int		my_putcharprintf(char c);
int		my_getnbrprintf(char *str);
int		my_getnbrprintfU(char *str);
int		my_putstrprintf(char *str);
int		my_putcharprintf(char c);
int		mod_search(char c);

void		print_str(va_list ap, char *flag, int *count);
void		print_char(va_list ap, char *flag, int *count);
void		print_int(va_list ap, char *flag, int *count);
void		print_uint(va_list ap, char *flag, int *count);
void		print_S(va_list ap, char *flag, int *count);
void		print_bin(va_list ap, char *flag, int *count);
void		print_hex(va_list ap, char *flag, int *count);
void		print_hexM(va_list ap, char *flag, int *count);
void		print_oct(va_list ap, char *flag, int *count);
void		print_wrong(va_list ap, char *flag, int *count);
void		print_S(va_list ap, char *flag, int *count);
void		print_Soct(char c, int *count);
void		print_point(va_list ap, char *flag, int *count);
void		print_percent(va_list ap, char *flag, int *count);
void		print_number(va_list ap, char *flag, int *count);

char		*my_strcatprintf(char *dest, char *src);
char		*my_strcatprintfinv(char *dest, char c);
char		*edit_my_number(char *number, char *mod, t_mod moddata);
char		*edit_my_unumber(char *number, char *mod, t_mod moddata);
char		*edit_my_str(char *str, char *mod, t_mod moddata);
char		*edit_my_base(char *number, char *mod, t_mod moddata);
char		*edit_my_point(char *point, char *mod, t_mod moddata);

char		*do_it_nbr(char *str, t_mod moddata);

t_flags		*my_flags();
t_flags		*my_setflags(t_flags *flags);
t_flags		*my_setfoncs(t_flags *flags);

t_modinit	*my_mod(t_modinit *mod);
t_modinit	*my_setmod(t_modinit *mod);
t_modinit	*my_setmodfoncs(t_modinit *mod);

t_mod		parse_my_mod(char *var, t_mod mod_data);
t_mod		parse_my_star(char *var, t_mod mod_data, va_list ap);
t_mod		my_moddata();
t_mod		mod_add(t_mod mod_data);
t_mod		mod_sub(t_mod mod_data);
t_mod		mod_star(t_mod mod_data);
t_mod		mod_dot(t_mod mod_data);
t_mod		mod_space(t_mod mod_data);
t_mod		mod_diez(t_mod mod_data);
t_mod		mod_zero(t_mod mod_data);

#endif /* !MY_H_ */
