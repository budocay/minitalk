/*
** my_putchar.c for my_putchar.c in /home/lina_a/rendu/Piscine_C_J03
**
** Made by Alexis Lina
** Login   <lina_a@epitech.net>
**
** Started on  Fri Oct 17 10:10:23 2014 Alexis Lina
** Last update Tue Oct 21 21:47:45 2014 Alexis Lina
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
