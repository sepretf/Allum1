/*
** alum1.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Mon Feb  8 11:46:27 2016 fabrice sepret
** Last update Thu Feb 18 10:15:12 2016 fabrice sepret
*/

#include <stdlib.h>
#include "alum1.h"
#include "get_next_line.h"

int	display_action(t_va var)
{
  fails = 0;
  my_putstr("Player removed ");
  my_putstr(var.str2);
  my_putstr(" match(es) from line ");
  my_putstr(var.str);
  my_putchar('\n');
  now_play(var);
}

int	fill_line()
{
  t_va	var;

  var.line1 = "*   |   *\n\0";
  var.line2 = "*  |||  *\n\0";
  var.line3 = "* ||||| *\n\0";
  var.line4 = "*|||||||*\n\0";
  my_putstr("*********\n");
  my_putstr(var.line1);
  my_putstr(var.line2);
  my_putstr(var.line3);
  my_putstr(var.line4);
  my_putstr("*********\n\nYour turn:\n");
  check_line(var);
}

int	main()
{
  fails = 0;
  fill_line();
}
