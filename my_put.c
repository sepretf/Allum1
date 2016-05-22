/*
** put.c for  in /home/sepret_f/PSU_2015_my_printf
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Wed Nov  4 10:05:26 2015 fabrice sepret
** Last update Wed Feb 10 14:56:02 2016 fabrice sepret
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i = i + 1;
  return (i);
}

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *st)
{
  int	i;

  i = 0;
  if (st ==  '\0')
    {
      write(1, &"(null)", 6);
      return (1);
    }
  while (st[i] != 0 && st[i] != '@')
    {
      my_putchar(st[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
    }
  my_putchar(nb % 10 + '0');
}
