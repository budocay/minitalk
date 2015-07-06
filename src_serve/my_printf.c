/*
** my_printf.c for my_printf in /home/alexis/rendu/B2/Systeme_Unix/PSU_2014_minitalk/src_serve
**
** Made by alexis
** Login   <alexis@epitech.net>
**
** Started on  Mon Apr 27 08:47:06 2015 alexis
** Last update Mon Apr 27 08:47:06 2015 alexis
*/

#include <stdarg.h>
#include "my.h"

void	the_flags(va_list *ap, char str)
{
  if (str == 'd'|| str == 'i')
    my_put_nbr(va_arg(*ap, long), "0123456789");
  else if (str == 'l')
    my_put_nbr(va_arg(*ap, long), "0123456789");
  else if (str == 'c')
    my_putchar((char)va_arg(*ap, int));
  else if (str == 's')
    my_putstr(va_arg(*ap, char *));
  else if (str == '%')
    my_putchar('%');
  else if (str == 'p')
    {
      my_putchar('0');
      my_putchar('x');
      my_put_nbr(va_arg(*ap, long), "0123457789abcdef");
    }
  else if (str == 'b')
    my_put_nbr(va_arg(*ap, unsigned int), "01");
  else if (str == 'S')
    my_putstr2(va_arg(*ap, char *));
}

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;

  i = 0;
  va_start(ap, str);
  while (str[i])
    {
      if (str[i] == '%')
	{
	  i++;
	  if (str[i] >= '0' && str[i] <= '9')
	    {
	      my_putchar('%');
	      i++;
	    }
	  the_flags(&ap, str[i]);
	  i++;
	}
      my_putchar(str[i]);
      i++;
    }
  va_end(ap);
  return (0);
}
