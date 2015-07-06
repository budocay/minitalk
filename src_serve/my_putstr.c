/*
** my_putstr.c for my_putstrs in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/src_serve
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:48:01 2015 alexis
** Last update Mon Apr 27 08:48:01 2015 alexis
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
