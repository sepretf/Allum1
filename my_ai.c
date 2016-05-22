/*
** my_ai.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Tue Feb  9 11:18:14 2016 fabrice sepret
** Last update Thu Feb 11 14:50:38 2016 fabrice sepret
*/

#include <stdlib.h>
#include "alum1.h"

int	ai_change(t_va var, char *st, int line)
{
  if (line == 1)
    change_line1_ai(var, st);
  else if (line == 2)
    change_line2_ai(var, st);
  else if (line == 3)
    change_line3_ai(var, st);
  else if (line == 4)
    change_line4_ai(var, st);
}

int	ai_turn(t_va var, char *str, int line, int matches)
{
  int	i;
  int	idx;
  char	st[10];

  idx = 0;
  i = 9;
  while (str[i] != 0)
    {
      if (str[i] == '|' && idx != matches)
	{
	  st[i] = ' ';
	  idx += 1;
	}
      else
	st[i] = str[i];
      i -= 1;
    }
  ai_change(var, st, line);
}

int	ai_play(t_va var, int ai_line, int matches)
{
  int	ai_matches;

  ai_matches = 10;
  while (ai_matches > matches)
    ai_matches = rand() %8;
  if (ai_matches == 0)
    ai_matches += 1;
  all_match(var, ai_matches, ai_line);
}

int	ai_line(t_va var, int line)
{
  int	matches;

  if (line == 1)
    matches = my_strmatch(var.line1);
  else if (line == 2)
    matches = my_strmatch(var.line2);
  else if (line == 3)
    matches = my_strmatch(var.line3);
  else if (line == 4)
    matches = my_strmatch(var.line4);
  if (matches == 0)
    my_ai(var);
  else
    ai_play(var, line, matches);
}

int	my_ai(t_va var)
{
  int	line_choose;

  line_choose = rand() %5;
  if (line_choose == 0)
    line_choose += 1;
  ai_line(var, line_choose);
}
