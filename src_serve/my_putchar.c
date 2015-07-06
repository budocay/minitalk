/*
** my_putchar.c for putchar in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/src_serve
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:49:28 2015 alexis
** Last update Mon Apr 27 08:49:28 2015 alexis
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
