/*
** my_put_nbr.c for put_nbr in /home/lina_a/rendu/Piscine/Piscine_C_J11/lib/my
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Fri Nov 14 11:01:03 2014 lina_a
** Last update Fri Nov 14 14:01:03 2014 lina_a
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
