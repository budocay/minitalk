/*
** client.c for  in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk
**
** Made by lina_a
** Login   <alexis@epitech.net>
**
** Started on  Thu Mar 19 10:10:32 2015 lina_a
** Last update Thu Mar 19 10:10:33 2015 lina_a
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "my.h"

void	send_msg(int pid, char word)
{
  int	i;
  char	c;

  i = -1;
  c = 1;
  while (++i < 8)
    {
      kill(pid, (c & (word >> i)) ? SIGUSR1 : SIGUSR2);
      usleep(500);
    }
}

void	client(char **av)
{
  int	pid;
  int	i;
  char	*word;

  pid = my_getnbr(av[1]);
  word = av[2];
  i = 0;
  while (word[i])
    {
      send_msg(pid, word[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 3)
    {
      my_printf("Error too many or few arguments\n");
      exit(0);
    }
  client(av);
  return (0);
}
