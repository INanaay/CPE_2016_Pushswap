/*
** sort.c for sort.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 18 16:52:25 2016 Nathan Lebon
** Last update Mon Nov 21 19:13:25 2016 Nathan Lebon
*/
#include <string.h>
#include "my.h"

int		is_sorted(t_dlist *la)
{
  int		i;
  t_node	*temp;

  temp = la->beg;
  i = 1;
  while (i < la->len)
    {
      if (temp->val > temp->next->val)
	return (0);
      temp = temp->next;
      i = i + 1;
    }
  return (1);
}

int		is_minor(t_dlist *la)
{
  t_node	*n;
  int		nb;

  n = la->beg;
  nb = la->beg->val;
  while (n != NULL)
    {
      my_putchar('p');
      if (nb > n->val)
	return (0);
      n = n->next;
    }
  return (1);
}

t_dlist		*sort(t_dlist *la, t_dlist *lb)
{
  while (is_sorted(la) == 0)
    {
      if (LA2 > LA1)
	sa(la);
      else if (is_minor(la) == 1)
	pb(la,lb);
      else
	ra(la);
    }
  while (lb->len != 0)
    pa(la, lb);
}
