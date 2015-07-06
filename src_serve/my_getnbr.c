/*
** my_getnbr.c for my_getnbr in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/src_serve
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:47:39 2015 alexis
** Last update Mon Apr 27 08:47:39 2015 alexis
*/

#include <stdlib.h>
#include "my.h"

int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	nb;
  int	p;

  nb = 0;
  i = 0;
  p = 1;
  if (str == NULL)
    return (0);
  while (((str[i] < '0') || (str[i] > '9')) && ((str[i] != '-') && (str[i])))
    i++;
  if (str[i] == '-')
    i++;
  j = i;
  while ((str[i] >= '0') && (str[i] <= '9'))
    i++;
  i--;
  while (str[i] != str[j - 1])
    {
      nb = nb + (str[i] - 48) * p;
      p *= 10;
      i--;
    }
  if (str[i] == '-')
    nb = nb * (-1);
  return (nb);
}
