/*
** my_getnbr.c for my_getnbr.c in /home/lina_a/rendu/Piscine/Piscine_C_J11/lib/my
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Mon Nov  3 13:59:12 2014 lina_a
** Last update Fri Feb 20 09:20:40 2015 lina_a
*/

#include <stdlib.h>
#include "my.h"

int	my_getnbr(char *str)
{
  int	nb;
  int	i;
  int	sign;

  if (str == NULL)
    return (0);
  i = 0;
  sign = 0;
  nb = 0;
  while (str[i] && (str[i] == '-' || str[i] == '+'))
    if (str[i] == '-')
      {
	sign++;
	i++;
      }
  while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
      nb = (nb * 10) + (str[i] - 48);
      i++;
    }
  return (((sign % 2) == 1) ? ((nb) * (-1)) : (nb));
}
