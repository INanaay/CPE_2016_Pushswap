/*
** papb.c for papb in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 11:24:50 2016 Nathan Lebon
** Last update Thu Nov 24 16:28:10 2016 Nathan Lebon
*/

#include "my.h"
#include <string.h>
#include <stdlib.h>

t_dlist		*reset_index(t_node *node)
{
  node = node->next;
  while (node != NULL)
    {
      node->index = node->index - 1;
      node = node->next;
    }
}

t_dlist		*remove_elem(t_dlist *list, int index)
{
  t_node	*n;

  n = list->beg;
  while (n->index != index)
    n = n->next;
  reset_index(n);
  if (n->next == NULL && n->prev)
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

void		pa(t_dlist *la, t_dlist *lb)
{
  if (lb->len > 0)
    {
      add_beg(la, lb->beg->val);
      if (lb->len == 1)
	{
	  lb->beg = NULL;
	  lb->len = lb->len - 1;
	}
      else
	remove_elem(lb, 1);
      set_index(la);
    }
}

void		pb(t_dlist *la, t_dlist *lb)
{
  if (la->len > 0)
    {
      add_beg(lb, la->beg->val);
      if (la->len == 1)
	{
	  la->beg = NULL;
	  la->len = la->len - 1;
	}
      else
	remove_elem(la, 1);
    }
}
