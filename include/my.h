/*
** my.h for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
** 
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
** 
** Started on  Wed Nov  9 13:23:16 2016 julian ladjani
** Last update Sun Nov 13 13:43:54 2016 julian ladjani
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_flags
{
  char		flag;
  void		(*fonc)(va_list ap, char *flag, int *count);
}		t_flags;

char		*my_putnbrint(int nb);
char		*my_putnbrlong(long nb);
char		*my_putnbrshort(short nb);
char		*my_putnbrlonglong(long long nb);
char		*my_putnbruint(int nb);
char		*my_putnbrulong(long nb);
char		*my_putnbrushort(short nb);
char		*my_putnbrulonglong(long long nb);
char		*my_convertbase(char *snumber, int base);
char		*my_memsetprintf(char *tempflag, int lenght);
char		*my_revstrprintf(char *str);
char		*prepare_tempflag(char *str, char *tempflag);
int		flag_search(char c);
int		my_printf(char *str, ...);
int		my_strlenprintf(char *str);
int		my_putcharprintf(char c);
int		my_getnbrprintf(char *str);
int		my_getnbrprintfU(char *str);
int		my_putstrprintf(char *str);
int		my_putcharprintf(char c);
void		print_str(va_list ap, char *flag, int *count);//
void		print_char(va_list ap, char *flag, int *count);//
void		print_int(va_list ap, char *flag, int *count);//
void		print_long(va_list ap, char *flag, int *count);//
void		print_short(va_list ap, char *flag, int *count);//
void		print_hex(va_list ap, char *flag, int *count);//
void		print_hexM(va_list ap, char *flag, int *count);//
void		print_oct(va_list ap, char *flag, int *count);//
void		print_point(va_list ap, char *flag, int *count);
void		print_percent(va_list ap, char *flag, int *count);
void		print_number(va_list ap, char *flag, int *count);


#endif /* !MY_H_ */
