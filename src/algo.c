/*
** algo.c for  in /home/beche_f/rendu/train_bsq/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sun Dec 13 16:33:31 2015 beche_f
** Last update Fri Dec 18 13:50:42 2015 beche_f
*/

#include "bsq.h"
#include "lib.h"

t_dim	algo(t_dim s, int size)
{
  int	save;

  save = 0;
  while ((s.y + size) <= s.height)
    {
      while ((s.x + size) < s.width)
	{
	  while ((get_square(s, size) == 0) && ((s.x + size) < s.width)
		 && ((s.y + size) <= s.height))
	    size++;
	  if (save < size)
	    {
	      save = size;
	      s.size = size - 1;
	      s.px = s.x;
	      s.py = s.y;
	    }
	  s.x++;
	}
	s.x = 0;
      s.y++;
    }
  return (s);
}

int	get_square(t_dim s, int size)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y < size)
    {
      if (s.y >= s.height)
	return (1);
      while (x < size)
	{
	  if (s.buffer[s.y][s.x] == 'o')
	    return (1);
	  x++;
	  s.x++;
	}
      x = 0;
      s.x = s.x - size;
      s.y++;
      y++;
    }
  return (0);
}

t_dim	paint(t_dim s)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (y < s.size)
    {
      while (x < s.size)
	{
	  s.buffer[s.py][s.px] = 'x';
	  x++;
	  s.px++;
	}
      x = 0;
      s.px = s.px - s.size;
      y++;
      s.py++;
    }
  return (s);
}
