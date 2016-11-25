/*
** sort.c for sort.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 18 16:52:25 2016 Nathan Lebon
** Last update Fri Nov 25 11:59:22 2016 Nathan Lebon
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
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
      if (nb > n->val)
	return (0);
      n = n->next;
    }
  return (1);
}

t_dlist		*finish_sort(t_dlist *la, t_dlist *lb, int i, char *s)
{
  int		b;

  b = 0;
  if (lb->len > 0)
    b = 1;
  while (lb->len != 0)
    {
      buff(s, i, "pa");
      pa(la, lb);
      i = i + 3;
    }
  if (b == 1)
    i = i - 3;
  write(1, s, i - 1);
  free(s);
}

t_dlist		*sort(t_dlist *la, t_dlist *lb, int i)
{
  char		*s;

  s = malloc(sizeof (char) * (10000000));
  while (is_sorted(la) == 0)
    {
      if (la->beg->val > la->beg->next->val)
	{
	  buff(s, i, "sa");
	  sa(la);
	}
      else if (is_minor(la) == 1)
	{
	  buff(s, i, "pb");
	  pb(la, lb);
	}
      else
	{
	  buff(s, i, "ra");
	  ra(la);
	}
      i = i + 2;
      buff(s, i, " ");
      i = i + 1;
    }
  finish_sort(la, lb, i, s);
}
