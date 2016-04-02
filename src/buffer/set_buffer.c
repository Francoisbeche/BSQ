/*
** set_buffer.c for  in /home/beche_f/rendu/CPE_2015_BSQ/src/buffer
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Dec 17 15:14:31 2015 beche_f
** Last update Sat Dec 19 07:24:26 2015 beche_f
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib.h"
#include "bsq.h"

char	**set_buffer(char **buffer,  char *file, t_dim s)
{
  int	fd;
  int	ret;
  char	c;
  int	x;
  int	y;

  x = 0;
  y = 0;
  fd = open(file, O_RDONLY);
  while ((ret = read(fd, &c, 1)) > 0)
    {
      if (y > 0)
	{
	  if (x < s.width)
	    buffer[y - 1][x++] = c;
	}
      if (c == '\n')
	{
	  y++;
	  x = 0;
	}
    }
  return (buffer);
}
