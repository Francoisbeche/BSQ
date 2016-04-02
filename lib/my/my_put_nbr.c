/*
** my_put_nbr.c for  in /home/beche_f/rendu/pushswap
**
** Made by francois beche
** Login   <beche_f@epitech.net>
**
** Started on  Sat Nov  7 18:27:45 2015 francois beche
** Last update Sun Dec 20 20:41:14 2015 beche_f
*/

#include"include/lib.h"

void	my_put_nbr(int nb)
{
  int	diviseur;
  int	result;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= 10)
    diviseur = diviseur * 10;
  while (diviseur > 0)
    {
      result = (nb / diviseur) % 10;
      my_putchar(result + 48);
      diviseur = diviseur / 10;
    }
}
