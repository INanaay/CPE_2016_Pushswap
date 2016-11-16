/*
** papb.c for papb in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 11:24:50 2016 Nathan Lebon
** Last update Wed Nov 16 14:46:16 2016 Nathan Lebon
*/

#include "my.h"
#include <string.h>
#include <stdlib.h>

t_dlist		*remove_elem(t_dlist *list, int index)
{
  t_node	*n;
  
  n = list->beg;
  while (n->index != index)
    n = n->next;
  if (n->next == NULL)
    {
      list->end = n->prev;
      list->end->next = NULL;
    }
  else if (n->prev == NULL)
    {
      list->beg = n->next;
      list->beg->prev = NULL;
    }
  else
    {
      n->next->prev = n->prev;
      n->prev->next = n->next;
    }
  free(n);
  list->len = list->len - 1;
  return (list);
}

void		*pa(t_dlist *la, t_dlist *lb)
{
  if (lb->len > 0)
    {
      add_beg(la, lb->beg->val);
      remove_elem(lb, 0);
      my_putstr("pa");
    }
}

void		*pb(t_dlist *la, t_dlist *lb)
{
  if (la->len > 0)
    {
      add_beg(lb, la->beg->val);
      remove_elem(la, 0);
      my_putstr("pb");
    }
}
