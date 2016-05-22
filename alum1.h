/*
** alum1.h for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
** 
** Made by fabrice sepret
** Login   <sepret_f@epitech.net>
** 
** Started on  Mon Feb  8 13:54:30 2016 fabrice sepret
** Last update Tue Feb 16 22:44:03 2016 fabrice sepret
*/

#ifndef		ALUM1_H_
# define	ALUM1_H_

int	fails;

typedef struct s_va
{
  char	*line1;
  char	*line2;
  char	*line3;
  char	*line4;
  char	*str;
  char	*str2;
}		t_va;

typedef struct s_ai
{
  int	id1;
  int	id2;
  int	id3;
  int	id4;
  int	g4;
  int	g2;
  int	g1;
}		t_ai;

char	*get_next_line(const int fd);
char	*change_str(t_va var, char *str);
int	fill_line();
int	main();

#endif /* !ALUM1_H_ */
