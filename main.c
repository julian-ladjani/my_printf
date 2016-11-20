/*
** main.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Mar Nov 15 02:19:16 2016 Julian Ladjani
** Last update Jan Nov 20 18:18:33 2016 Julian Ladjani
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
  my_printf("%20.40s|\n", "azer");
    my_printf("%5.3s|\n", "azer");
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
  printf("pf %p\n", &val);
  my_printf("my %p\n", &val);
  printf("pf %x\n", 1000);
  my_printf("my %x\n", 1000);
  printf("pf f\n");
}
