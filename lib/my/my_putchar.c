/*
** my_putchar.c for  in /home/beche_f/rendu/lib/my
**
** Made by francois beche
** Login   <beche_f@epitech.net>
**
** Started on  Tue Nov 17 16:14:03 2015 francois beche
** Last update Tue Dec 15 16:32:55 2015 beche_f
*/

#include <unistd.h>
#include"include/lib.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}
