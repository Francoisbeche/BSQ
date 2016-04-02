/*
** my_putstr.c for  in /home/beche_f/rendu/lib/my
**
** Made by francois beche
** Login   <beche_f@epitech.net>
**
** Started on  Tue Nov 17 16:14:30 2015 francois beche
** Last update Tue Dec 15 16:33:15 2015 beche_f
*/

#include"include/lib.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
