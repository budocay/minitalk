/*
** my_strlen.c for my_strlen in /home/lina_a/rendu/Piscine_C_J04
**
** Made by Alexis Lina
** Login   <lina_a@epitech.net>
**
** Started on  Thu Oct  2 18:18:43 2014 Alexis Lina
** Last update Mon Oct 20 14:51:52 2014 Alexis Lina
*/

#include <stdlib.h>
#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
