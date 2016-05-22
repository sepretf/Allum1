/*
** strat_ai.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Thu Feb 11 11:25:32 2016 fabrice sepret
** Last update Fri Feb 12 11:31:18 2016 fabrice sepret
*/

#include "alum1.h"

int	playing(t_va var, int ai_matches, int ai_line)
{
  ai_message(ai_matches, ai_line);
  if (ai_line == 1)
    ai_turn(var, var.line1, ai_line, ai_matches);
  else if (ai_line == 2)
    ai_turn(var, var.line2, ai_line, ai_matches);
  else if (ai_line == 3)
    ai_turn(var, var.line3, ai_line, ai_matches);
  else if (ai_line == 4)
    ai_turn(var, var.line4, ai_line, ai_matches);
}

int	all_match(t_va var, int ai_matches, int ai_line)
{
  int	l1;
  int	l2;
  int	l3;
  int	l4;
  int	add;
  int	sous;

  add = 0;
  sous = 0;
  l1 = my_strmatch(var.line1);
  l2 = my_strmatch(var.line2);
  l3 = my_strmatch(var.line3);
  l4 = my_strmatch(var.line4);
  add = l1 + l2 + l3 + l4;
  sous = add - ai_matches;
  if (sous == 1 || sous == 5 || sous == 0 && add == 1 ||
      sous == 9 || sous == 13 || sous == 2)
    playing(var, ai_matches, ai_line);
  else
    my_ai(var);
}
