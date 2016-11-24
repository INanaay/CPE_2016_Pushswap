/*
** sort.c for sort.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 18 16:52:25 2016 Nathan Lebon
** Last update Thu Nov 24 16:32:13 2016 Nathan Lebon
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
      if (nb > n->val)
	return (0);
      n = n->next;
    }
  return (1);
}

t_dlist		*sort(t_dlist *la, t_dlist *lb)
{
  char		s[1000000];
  int		i;

  i = 0;
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
  while (lb->len != 0)
    {
      buff(s, i, "pa");
      pa(la, lb);
      i = i + 3;
    }
  write(1, &s, i - 4);
}
