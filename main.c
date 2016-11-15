/*
** main.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf
**
** Made by Julian Ladjani
** Login  <julian.ladjani@epitech.eu>
**
** Started on  Mar Nov 15 02:19:16 2016 Julian Ladjani
** Last update Mar Nov 15 17:29:27 2016 Julian Ladjani
*/

#include <stdio.h>

int	main()
{
  void	*p = "t";
  char	*val;
  printf("==============PRINTF==============\n");
  printf("%s\n%s\n", "test", "test2");
  printf("%+09d%s\n", 123456, "+09d");
  printf("%+9d%s\n", 123456, "+9d");
  printf("%-09d%s\n", 123456, "-09d");
  printf("%-9d%s\n", 123456, "-9d");
  printf("%+-9d%s\n", 123456, "+-9d");
  printf("%-+9d%s\n", 123456, "-+9d");
  printf("%+-09d%s\n", 123456, "+-09d");
  printf("%-+09d%s\n", 123456, "-+09d");
  printf("\n");
  printf("%+09d%s\n", -12345, "+09d");
  printf("%+9d%s\n", -12345, "+9d");
  printf("%-09d%s\n", -12345, "-09d");
  printf("%-9d%s\n", -12345, "-9d");
  printf("%+-9d%s\n", -12345, "+-9d");
  printf("%-+9d%s\n", -12345, "-+9d");
  printf("%+-09d%s\n", -12345, "+-09d");
  printf("%-+09d%s\n", -12345, "-+09d");
  printf("%p\n", p);
  printf("blah%s%n\n", "test",&val);
  printf("%d\n", val);
  printf("S%i%s%d\n", printf("ZERT%sDFG", NULL), NULL, 10);
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
  my_printf("%s\n", NULL);
  my_printf("%S\n", "te\ast");
  my_printf("%p\n", p);
  my_printf("%12398k\n");
  my_printf("blah%s%n\n", "testt", &val);
  my_printf("%d\n", val);
  my_printf("S%i%s%d\n", my_printf("ZERT%sDFG", NULL), NULL, 10);
}
