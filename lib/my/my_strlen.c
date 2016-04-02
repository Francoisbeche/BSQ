/*
** my_strlen.c for  in /home/beche_f/rendu/lib/my
**
** Made by francois beche
** Login   <beche_f@epitech.net>
**
** Started on  Tue Nov 17 16:15:25 2015 francois beche
** Last update Tue Dec 15 16:33:24 2015 beche_f
*/

#include"include/lib.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      i = i + 1;
    }
  return (i);
}
