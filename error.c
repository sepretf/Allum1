/*
** error.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Mon Feb  8 14:36:36 2016 fabrice sepret
** Last update Thu Feb 25 14:21:31 2016 fabrice sepret
*/

#include <stdio.h>
#include "alum1.h"

int	my_strmatch(char *str)
{
  int	i;
  int	idx;

  idx = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == '|')
	idx += 1;
      i += 1;
    }
  return (idx);
}

int	count_match(t_va var, int i)
{
  int	nb;

  nb = 0;
  if (i == 1)
    nb = my_strmatch(var.line1);
  else if (i == 2)
    nb = my_strmatch(var.line2);
  else if (i == 3)
    nb = my_strmatch(var.line3);
  else if (i == 4)
    nb = my_strmatch(var.line4);
  return (nb);
}

int	line_empty(t_va var, int line)
{
  int	matches1;
  int	matches2;
  int	matches3;
  int	matches4;
  int	add;

  add = 0;
  matches1 = my_strmatch(var.line1);
  matches2 = my_strmatch(var.line2);
  matches3 = my_strmatch(var.line3);
  matches4 = my_strmatch(var.line4);
  add = matches1 + matches2 + matches3 + matches4;
  if (line == 1 && matches1 == 0 || line == 2 && matches2 == 0
      || line == 3 && matches3 == 0 || line == 4 && matches4 == 0)
    {
      my_putstr("Error: this line is empty\n");
      check_line(var);
    }
  else
    check_match(var, my_atoi(var.str));
}

int	check_match(t_va var, int line)
{
  int	nb_match;
  int	nb;

  nb_match = count_match(var, line);
  my_putstr("Matches: ");
  if ((var.str2 = get_next_line(0)) == NULL)
    return (-1);
  nb = my_atoi(var.str2);
  if (fails >= 20)
    too_muchfail(var);
  else if (nb < 0 || var.str2[0] < '0' || var.str2[0] > '9' || var.str2[1] > 0)
    input_inv(var);
  else if (my_atoi(var.str2) > nb_match)
    not_enough(var);
  else if (var.str2[0] <= '0' || var.str2[0] > '9')
    er_one(var);
  else
    display_action(var);
}

int	check_line(t_va var)
{
  int	idx;
  int	i;
  int	nb;

  i = count_match(var, my_atoi(var.str));
  idx = 0;
  my_putstr("Line: ");
  if ((var.str = get_next_line(0)) == NULL)
    return (-1);
  nb = my_atoi(var.str);
  if (fails >= 20)
    too_muchfail(var);
  else if (nb < 0 || var.str[0] < '0')
    input_inv(var);
  else if (var.str[1] != 0)
    check_this(var);
  else if (nb == 0 || nb > 4)
    {
      my_putstr("Error: this line is out of range\n");
      check_line(var);
    }
  else
    line_empty(var, my_atoi(var.str));
}
