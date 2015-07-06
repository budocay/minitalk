/*
** my.h for my.h in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/include
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:58:52 2015 alexis
** Last update Mon Apr 27 08:58:52 2015 alexis
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

void	decode(int bit);
void	catch_sig1(int sig);
void	catch_sig2(int sig);
int	my_getnbr(char *str);
void	my_putchar(char c);
int	my_put_nbr(long nb, char *base);
int	my_abs(long nb);
int	my_putstr2(char *str);
int	my_putstr(char *str);
int	my_strlen(char *str);
void	send_msg(int pid, char word);
void	client(char **av);
int	my_printf(char *str, ...);
void	the_flags(va_list *ap, char str);

#endif /* !MY_H_ */
