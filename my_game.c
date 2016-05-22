/*
** my_game.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Tue Feb  9 09:29:46 2016 fabrice sepret
** Last update Tue Feb  9 10:14:01 2016 fabrice sepret
*/

#include "alum1.h"

int	now_play(t_va var)
{
  if (var.str[0] == '1')
    change_str(var, var.line1);
  else if (var.str[0] == '2')
    change_str(var, var.line2);
  else if (var.str[0] == '3')
    change_str(var, var.line3);
  else if (var.str[0] == '4')
    change_str(var, var.line4);
}
