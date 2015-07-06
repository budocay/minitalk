/*
** my_putstr2.c for putstr2 in /home/lina_a/rendu/PSU_2014_my_printf/lib/my
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Sun Nov 16 16:16:59 2014 lina_a
** Last update Sun Nov 16 16:16:59 2014 lina_a
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr2(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  if (str[i] <= 7)
	    my_putstr("00");
	  else if (str[i] < 32)
	    my_putchar('0');
	  my_put_nbr(str[i], "01234567");
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
