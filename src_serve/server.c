/*
** test_s.c for lol in /home/alexis/Bureau
**
** Made by lina_a
** Login   <alexis@epitech.net>
**
** Started on  Tue Mar 17 11:56:23 2015 lina_a
** Last update Tue Mar 17 11:56:23 2015 lina_a
*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void		decode(int bit)
{
  static	char	c;
  static	char	i;

  c += (bit << i);
  if (i == 7)
    {
      my_putchar(c);
      i = 0;
      c = 0;
    }
  else
    i++;
}

void	catch_sig1(int sig)
{
  (void)sig;
  decode(1);
}

void	catch_sig2(int sig)
{
  (void)sig;
  decode(0);
}

int	main()
{
  signal(SIGUSR1, &catch_sig1);
  signal(SIGUSR2, &catch_sig2);
  my_printf("The serveur pid is : %d\n", getpid());
  while (42);
}
