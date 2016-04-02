/*
** malloc_buffer.c for  in /home/beche_f/rendu/CPE_2015_BSQ/src/buffer
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Dec 17 14:53:44 2015 beche_f
** Last update Sun Dec 20 20:40:25 2015 beche_f
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib.h"
#include "bsq.h"


char	**malloc_buffer(char **buffer, t_dim s)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  buffer = malloc(sizeof(char *) * (s.height + 1));
  while (y < s.height)
    {
      buffer[y] = malloc(sizeof(char) * (s.width + 1));
      buffer[y][s.width] = 0;
      while (x < s.width)
	{
	  buffer[y][x] = 'A';
	  x++;
	}
      x = 0;
      y++;
    }
  return (buffer);
}

void	free_buffer(char ** buffer, t_dim s)
{
  int	x;

  x = 0;
  while (x < s.height)
    {
      free(buffer[x]);
      x++;
    }
  free(buffer);
}
