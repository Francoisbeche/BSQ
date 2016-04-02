/*
** main.c for  in /home/beche_f/rendu/CPE_2015_BSQ/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Dec 17 14:12:09 2015 beche_f
** Last update Sun Dec 20 21:31:14 2015 beche_f
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib.h"
#include "bsq.h"

t_dim	init_struct(t_dim s)
{
  s.x = 0;
  s.y = 0;
  s.px = 0;
  s.py = 0;
  return (s);
}

int	check_error(int ac, char **av)
{
  int fd;

  fd = 0;
  if (ac != 2)
    {
      write(2, "ERROR: Map Missing.\n", 21);
      return (1);
    }
  if ((fd = open(av[1], O_RDONLY)) == -1)
    {
      write(2, "ERROR: Wrong Map.\n", 18);
      return (1);
    }
  close(fd);
  return (0);
}

int	main(int ac, char **av)
{
  t_dim	s;
  char	**buffer;

  if (check_error(ac, av) != 0)
    return (0);
  s = init_struct(s);
  buffer = NULL;
  s = get_height_width(s, av[1]);
  buffer = malloc_buffer(buffer, s);
  set_buffer(buffer, av[1], s);
  s.buffer= buffer;
  s = algo(s, 0);
  s = paint(s);
  display_buffer(s);
  free_buffer(buffer, s);
  return (0);
}
