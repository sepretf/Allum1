/*
** check_line.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Thu Feb 25 14:17:54 2016 fabrice sepret
** Last update Thu Feb 25 14:25:07 2016 fabrice sepret
*/

#include "alum1.h"

int	check_this(t_va var)
{
  int	i;
  int	idx;

  idx =0;
  i = 0;
  while (var.str[i] != 0)
    {
      if (var.str[i] > '9' || var.str[i] < '0')
	idx = 1;
      i += 1;
    }
  if (idx == 1)
    input_inv(var);
  else
    {
      my_putstr("Error: this line is out of range\n");
      check_line(var);
    }
}
