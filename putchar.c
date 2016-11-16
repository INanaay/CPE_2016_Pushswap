/*
** putchar.c for putchar in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 10:48:22 2016 Nathan Lebon
** Last update Wed Nov 16 11:02:52 2016 Nathan Lebon
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *s)
{
  int	i;

  i = 0;
  while (s[i])
    {
      my_putchar(s[i]);
      i = i + 1;
    }
}
