/*
** my_put_nbr.c for putnbr in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/src_serve
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:49:18 2015 alexis
** Last update Mon Apr 27 08:49:18 2015 alexis
*/

#include "my.h"

int	my_put_nbr(long nb, char *base)
{
  int	j;

  j = my_strlen(base);
  if (nb / j != 0)
    my_put_nbr(my_abs(nb / j), base);
  my_putchar(base[nb % j]);
  return (0);
}

int	my_abs(long nb)
{
  if (nb < 0)
    nb *= (-1);
  return (nb);
}
