/*
** get_dim.c for  in /home/beche_f/rendu/CPE_2015_BSQ/src/buffer
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Dec 17 14:25:10 2015 beche_f
** Last update Sun Dec 20 20:39:16 2015 beche_f
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib.h"
#include "bsq.h"

t_dim	get_height_width(t_dim s, char *file)
{
  int	ret;
  int	fd;
  int	y;
  char	c;
  int	x;

  x = 0;
  y = 0;
  fd = open(file, O_RDONLY);
  while ((ret = read(fd, &c, 1))> 0)
    {
      if (c == '\n')
	y++;
      if (y > 0 && y < 2)
	x++;
    }
  s.height = y - 1;
  s.width = x;
  close(fd);
  return (s);
}
