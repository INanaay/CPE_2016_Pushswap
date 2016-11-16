/*
** print_int.c for printint in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 12:39:40 2016 Nathan Lebon
** Last update Tue Nov 15 12:45:48 2016 Nathan Lebon
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void    print_int(int i)
{
  char  nb[25];
  int   j;

  j = 0;
  if (i == 0)
    {
      my_putchar('0');
      return;
    }
  if (i < 0)
    {
      my_putchar('-');
      i = - i;
    }
  while (i != 0)
    {
      nb[j] = (i % 10 + 48);
      i = i / 10;
      j = j + 1;
    }
  j = j - 1;
  while (j >= 0)
    {
      my_putchar(nb[j]);
      j = j - 1;
    }
}
