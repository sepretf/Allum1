/*
** print_error.c for  in /home/sepret_f/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Tue Feb 16 18:45:24 2016 fabrice sepret
** Last update Wed Feb 17 10:04:51 2016 fabrice sepret
*/

#include "alum1.h"

int	too_muchfail(t_va var)
{
  my_putstr("\nExit: too much input error\n");
  fails += 1;
}

int	input_inv(t_va var)
{
  my_putstr("Error: invalid input (positive number expected)\n");
  fails += 1;
  check_line(var);
}

int	not_enough(t_va var)
{
  my_putstr("Error: not enough matches on this line\n");
  fails += 1;
  check_line(var);
}

int	er_one(t_va var)
{
  my_putstr("Error: you have to remove at least one match\n");
  fails += 1;
  check_line(var);
}
