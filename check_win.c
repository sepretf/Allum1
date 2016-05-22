/*
** chech_win.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Wed Feb 10 15:02:06 2016 fabrice sepret
** Last update Sat Feb 20 11:03:18 2016 fabrice sepret
*/

#include <stdlib.h>
#include "alum1.h"

int	free_all(t_va var)
{
  free(var.line1);
  free(var.line2);
  free(var.line3);
  free(var.line4);
  free(var.str);
  free(var.str2);
}

int	check_win_ai(t_va var)
{
  int		l1;
  int		l2;
  int		l3;
  int		l4;
  int		add;

  l1 = my_strmatch(var.line1);
  l2 = my_strmatch(var.line2);
  l3 = my_strmatch(var.line3);
  l4 = my_strmatch(var.line4);
  add = l1 + l2 + l3 + l4;
  if (add == 0)
    {
      my_putstr("I lost.. snif.. but I'll get you next time!!\n");
      free_all(var);
    }
  else
    {
      my_putstr("\nYour turn:\n");
      check_line(var);
    }
}

int		check_win(t_va var)
{
  int	l1;
  int	l2;
  int	l3;
  int	l4;
  int	add;

  l1 = my_strmatch(var.line1);
  l2 = my_strmatch(var.line2);
  l3 = my_strmatch(var.line3);
  l4 = my_strmatch(var.line4);
  add = l1 + l2 + l3 + l4;
  if (add == 0)
    {
      my_putstr("You lost, too bad..\n");
      free_all(var);
    }
  else
    my_ai(var);
}
