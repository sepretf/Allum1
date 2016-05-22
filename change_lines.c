/*
** change_lines.c for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Tue Feb  9 11:00:18 2016 fabrice sepret
** Last update Thu Feb 18 14:32:52 2016 fabrice sepret
*/

#include <stdlib.h>
#include "alum1.h"

int	change_line1(t_va var, char *str)
{
  int	i;

  i = 0;
  if ((var.line1 = malloc(sizeof(char *) * 10)) == NULL)
    return (-1);
  while (str[i] != 0)
    {
      var.line1[i] = str[i];
      i += 1;
    }
  now_display(var);
}

int	change_line2(t_va var, char *str)
{
  int	i;

  i = 0;
  if ((var.line2 = malloc(sizeof(char *) * 10)) == NULL)
    return (-1);
  while (str[i] != 0)
    {
      var.line2[i] = str[i];
      i += 1;
    }
  now_display(var);
}

int	change_line3(t_va var, char *str)
{
  int	i;

  i = 0;
  if ((var.line3 = malloc(sizeof(char *) * 10)) == NULL)
    return (-1);
  while (str[i] != 0)
    {
      var.line3[i] = str[i];
      i += 1;
    }
  now_display(var);
}

int	change_line4(t_va var, char *str)
{
  int	i;

  i = 0;
  if ((var.line4 = malloc(sizeof(char *) * 10)) == NULL)
    return (-1);
  while (str[i] != 0)
    {
      var.line4[i] = str[i];
      i += 1;
    }
  now_display(var);
}
