/*
** my_putstr.c for my_putsrt.c in /home/lina_a/rendu/Piscine_C_J04
**
** Made by Alexis Lina
** Login   <lina_a@epitech.net>
**
** Started on  Fri Oct  3 22:51:01 2014 Alexis Lina
** Last update Tue Oct 21 21:47:27 2014 Alexis Lina
*/

#include <stdlib.h>
#include "../include/my.h"

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
