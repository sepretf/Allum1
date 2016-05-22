/*
** display.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Tue Feb  9 10:09:01 2016 fabrice sepret
** Last update Tue Feb 16 22:39:46 2016 fabrice sepret
*/

#include "alum1.h"

int	now_display(t_va var)
{
  int	i;

  i = 0;
  my_putstr("*********\n");
  my_putstr(var.line1);
  my_putstr(var.line2);
  my_putstr(var.line3);
  my_putstr(var.line4);
  my_putstr("*********\n");
  i = check_win(var);
}

int	ai_message(int ai_matches, int ai_line)
{
  my_putstr("\nAI's turn...\n");
  my_putstr("AI removed ");
  my_putnbr(ai_matches);
  my_putstr(" match(es) from line ");
  my_putnbr(ai_line);
  my_putchar('\n');
}

int	now_display_ai(t_va var)
{
  my_putstr("*********\n");
  my_putstr(var.line1);
  my_putstr(var.line2);
  my_putstr(var.line3);
  my_putstr(var.line4);
  my_putstr("*********\n");
  check_win_ai(var);
}

int	check_game(t_va var, char *st)
{
  if (var.str[0] == '1')
    change_line1(var, st);
  else if (var.str[0] == '2')
    change_line2(var, st);
  else if (var.str[0] == '3')
    change_line3(var, st);
  else if (var.str[0] == '4')
    change_line4(var, st);
}

char	*change_str(t_va var, char *str)
{
  int	matches;
  int	i;
  int	idx;
  char	st[10];

  idx = 0;
  i = 9;
  matches = my_atoi(var.str2);
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
  check_game(var, st);
}
