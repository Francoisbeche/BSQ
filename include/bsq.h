/*
** bsq.h for  in /home/beche_f/rendu/train_bsq/include
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sat Dec 12 20:44:07 2015 beche_f
** Last update Fri Dec 18 23:02:14 2015 beche_f
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


#ifndef _BSQ_H_
# define _BSQ_H_
typedef struct	s_dim
{
  char		**buffer;
  int		width;
  int		height;
  int		x;
  int		y;
  int		px;
  int		py;
  int		size;
}		t_dim;
t_dim	init_struct(t_dim);
t_dim	paint(t_dim);
t_dim	algo(t_dim, int);
void	display_buffer(t_dim);
t_dim	get_height_width(t_dim, char*);
char	**malloc_buffer(char**, t_dim);
char	**set_buffer(char**, char*, t_dim);
int	get_square(t_dim, int);
t_dim	paint(t_dim);
void	free_buffer(char**, t_dim);
#endif /*!_BSQ_H_*/
