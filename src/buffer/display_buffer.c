/*
** display_buffer.c for  in /home/beche_f/rendu/CPE_2015_BSQ/src/buffer
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Dec 17 15:02:18 2015 beche_f
** Last update Fri Dec 18 13:50:19 2015 beche_f
*/

#include "lib.h"
#include "bsq.h"

void	display_buffer(t_dim s)
{
  int	x;

  x = 0;
  while (x < s.height)
    {
      my_putstr(s.buffer[x]);
      x++;
    }
}
