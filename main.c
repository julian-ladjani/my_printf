/*
** main.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Mar Nov 15 02:19:16 2016 Julian Ladjani
** Last update Jan Nov 20 02:34:11 2016 Julian Ladjani
*/

#include <stdio.h>
#include <stdarg.h>

int	my_printf(char *str, ...);

int	main()
{
  void	*p = "t";
  char	*val;
  int	INT_MAX = 20000000;
  int	INT_MIN = 0;
  int		*n;
  int UINT_MAX = 20000000;
  int LLONG_MAX = 20000000;
  int ULLONG_MAX = 20000000;
  int	LLONG_MIN = 0;
  char c;
  char		str[] = "jd jd ksj dkj djk djk djk";
  c = '$';
  printf("==============PRINTF==============\n");
    my_printf("%d\n", my_printf("%-+#.6hhdf%s\n&", c, str));
  printf("%20.40s|\n", "azer");
    printf("%5.3s|\n", "azer");
  printf("%s\n%s\n", "test", "test2");
  printf("%+09d%s\n", 123456, "+09d");
  printf("%+9d%s\n", 123456, "+9d");
  printf("%-09d%s\n", 123456, "-09d");
  printf("%-9d%s\n", 123456, "-9d");
  printf("%+-9d%s\n", 123456, "+-9d");
  printf("%-+09d%s\n", 123456, "-+09d");
  printf("\n");
  printf("%+09d%s\n", -12345, "+09d");
  printf("%+9d%s\n", -12345, "+9d");
  printf("%-09d%s\n", -12345, "-09d");
  printf("%-9d%s\n", -12345, "-9d");
  printf("%+-9d%s\n", -12345, "+-9d");
  printf("%-+09d%s\n", -12345, "-+09d");
  printf("\n");
  printf("");
  my_printf("=============MY_PRINTF============\n");
  my_printf("%s\n%s\n", "test", "test2");
  my_printf("%+09d%s\n", 123456, "+09d");
  my_printf("%+9d%s\n", 123456, "+9d");
  my_printf("%-09d%s\n", 123456, "-09d");
  my_printf("%-9d%s\n", 123456, "-9d");
  my_printf("%+-9d%s\n", 123456, "+-9d");
  my_printf("%-+9d%s\n", 123456, "-+9d");
  my_printf("%+-09d%s\n", 123456, "+-09d");
  my_printf("%-+09d%s\n", 123456, "-+09d");
  my_printf("\n");
  my_printf("%+09d%s\n", -12345, "+09d");
  my_printf("%+9d%s\n", -12345, "+9d");
  my_printf("%-09d%s\n", -12345, "-09d");
  my_printf("%-9d%s\n", -12345, "-9d");
  my_printf("%+-9d%s\n", -12345, "+-9d");
  my_printf("%-+9d%s\n", -12345, "-+9d");
  my_printf("%+-09d%s\n", -12345, "+-09d");
  my_printf("%-+09d%s\n", -12345, "-+09d");
  my_printf("%-+09d%s\n", -12345, "-+09d");
  my_printf("%d\n", 12345);
  my_printf("%s\n", NULL);
  my_printf("%S\n", "te\ast");
  my_printf("%p\n", p);
  my_printf("%12398k\n");
  my_printf("blah%s%n\n", "testt", &val);
  my_printf("%d\n", val);
  my_printf("S%i%s%d\n", my_printf("ZERT%sDFG", NULL), NULL, 10);

  my_printf("%d\n", my_printf("chaine de test"));

  my_printf("%d\n",my_printf("%00-0.-004d\n", 42));
  my_printf("%d\n",my_printf("%.0x\n", 42));
  my_printf("%i\n",my_printf("%#0-134.-2X\n", 42));
  my_printf("%d\n",my_printf("%#0-134.-135X\n", 42));
  my_printf("%i\n",my_printf("%-+#00d\n", -42));

  my_printf("%d\n",my_printf("%00-0.004u\n", -42));
  my_printf("A\n");

  my_printf("%d\n",my_printf("%u\n", -0));
  my_printf("A\n");
  my_printf("%d\n",my_printf("%#5x\npouet\n", 42));
  my_printf("A\n");
  my_printf("%i\n",my_printf("%%%%%d\n", 42));
  my_printf("A\n");
  my_printf("%d\n",my_printf("%%%%%d\n", 42));
  my_printf("A\n");
  my_printf("%d\n",my_printf("%#5x\npouet\n", 42));
  my_printf("A\n");
  my_printf("%i\n",my_printf("%%%%%d\n", 42));
  my_printf("A\n");
  my_printf("%d\n",my_printf("0.0o\n", 42));
  my_printf("A\n");

  my_printf("%d\n",my_printf("%%d\n", 42));
  my_printf("%d\n",my_printf("%.0llhd\n", -42));
  my_printf("%d\n",my_printf("%d\n", str));
  my_printf("%d\n", my_printf("te:%.5s:%-32.14s$\n", "chaine de test", "terwe"));
  my_printf("%d\n", my_printf("te:%#.5s:%0#-32.14s$\n", "ch", "terwe"));
  my_printf("%d\n", my_printf("%#.5s:%0#-32.14s$\n", "ch", "terwe"));

  my_printf("%d\n", my_printf("%045s:%#032.1s$\n", "ch", "terwe"));
  my_printf("%d\n", my_printf("%045s:%#0-32.1s$\n", "ch", "terwe"));
  my_printf("%d\n", my_printf("%c$\n", 'h'));

  my_printf("%d\n", my_printf("%#-56.1d:%0#-3.14d$\n", UINT_MAX, UINT_MAX));

  my_printf("%d\n", my_printf("% +.16d:%0# +32.0d$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%-.1d:%0#-32.0d$\n", UINT_MAX, UINT_MAX));
  my_printf("%d\n", my_printf("%#.1d:%0#-32.0d$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#.1d:%0#-32.0d$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#-56.1x:%0#-3.14x$\n", UINT_MAX, UINT_MAX));

  my_printf("%d\n", my_printf("% +.16X:%0# +32.0X$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%-.1X:%0#-32.0X$\n", UINT_MAX, UINT_MAX));
  my_printf("%d\n", my_printf("%#.1X:%0#-32.0X$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#.1u:%0#-32.0u$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#-56.1o:%0#-3.14o$\n", UINT_MAX, UINT_MAX));
  my_printf("%d\n", my_printf("% +.16o:%0# +32.0o$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#-.1o:%0#-32.0o$\n", UINT_MAX, UINT_MAX));
  my_printf("%d\n", my_printf("%#23.31u:%0#-32.0u$\n", INT_MIN, INT_MAX));
  my_printf("%d\n", my_printf("%#23.31u:%0# -13.0u$\n",0, 0));
  my_printf("%d\n", my_printf("%#44.1X:%0#-32.0X$\n", 0, 0));
  my_printf("%d\n", my_printf("%1d:%0-2.6d$\n", 0, 0));

my_printf("%d\n", my_printf("% +.16llX:%0# +32.0llX%s$\n", LLONG_MIN, LLONG_MAX,"hsjkdfh"));
  my_printf("%d\n", my_printf("%-.1llX:%0#-32.0llX$\n", LLONG_MIN, ULLONG_MAX));
  my_printf("%d\n", my_printf("%#.1lld:%0#-32.0lld$\n", LLONG_MIN, ULLONG_MAX));
  my_printf("%d\n", my_printf("%#.1llu:%0#-32.0llu$\n", LLONG_MIN, ULLONG_MAX));
  my_printf("%d\n", my_printf("%#-56.1llo:%0#-3.14llo$\n", LLONG_MIN, LLONG_MAX));
  my_printf("%d\n", my_printf("% +.1ll6o:%0# +32.0llo$\n", LLONG_MIN, LLONG_MAX));
  my_printf("%d\n", my_printf("%#-.1llo:%0#-3ll2.0llo$\n", LLONG_MIN, LLONG_MAX));
  my_printf("16llX%d\n", my_printf("%#23.31u:%0#-32.0u$\n", LLONG_MIN, LLONG_MAX));
  my_printf("%d\n", my_printf("%#23.31llu:%0# -13.0llu$\n",0, 0));
  my_printf("%d\n", my_printf("%#44.1llX:%0#-32.0llX$\n", 0, 0));
  my_printf("%d\n", my_printf("%1lld:%0-2.6lld$\n", 0, 0));

  char *a = 0;
  my_printf("%d\n", my_printf("%s", a));
  a = malloc(sizeof(*a));
  my_printf("%d\n", my_printf("%p", a));
  my_printf("%d\n", my_printf("%p", a));
  my_printf("NEW TEST\n");
  my_printf("%d\n", my_printf(""));
  my_printf("%d\n", my_printf("0"));
  my_printf("%d\n", my_printf("%-+1~sdf$"));
  free(a);
  my_printf("test");
  my_printf("%d\n", my_printf("%-+#.3c&", c));
  my_printf("%d\n", my_printf("%-#6.2c", c));
  my_printf("%d\n", my_printf("%-4.5c", c));
  my_printf("%d\n", my_printf("%3.4c", c));
  my_printf("%d\n", my_printf("%.4c", c));
  my_printf("%d\n", my_printf("%45c", c));
  my_printf("%d\n", my_printf("%-+#.3p&", a));
  my_printf("%d\n", my_printf("%-#6.2p&", a));
  my_printf("%d\n", my_printf("%-42.52p&", a));
  my_printf("%d\n", my_printf("%32.24p&", a));
}
