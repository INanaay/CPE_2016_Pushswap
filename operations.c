/*
** operations.c for operations in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 13:08:29 2016 Nathan Lebon
** Last update Wed Nov 16 11:02:03 2016 Nathan Lebon
*/

#include <string.h>
#include "my.h"

void		sa(t_dlist *list)
{
  t_node	*n;

  if (n == NULL || n->next == NULL)
    return;
  elem_swap(list, 1, 2);
}

void        sb(t_dlist *list)
{
  t_node        *n;

  if (n = NULL || n->next == NULL)
    return;
  elem_swap(list, 1, 2);
}

void		sc(t_dlist *list1, t_dlist *list2)
{
  sa(list1);
  sa(list2);
}

t_dlist		*elem_swap(t_dlist *list, int i1, int i2)
{
  t_node	*temp;
  t_node	*temp2;
  int		tempv;

  temp = list->beg;
  if (i1 > i2)
    {
      tempv = i2;
      i2 = i1;
      i1 = tempv;
    }
  while (temp->index != i1)
      temp = temp->next;
  tempv = temp->val;
  //printf("i1=%i, i2=%i\n", temp->val, tempv);
  temp2 = temp;
  while (temp->index != i2)
    temp = temp->next;
  //printf("i1=%i, i2=%i", temp->val, tempv);
  temp2->val = temp->val;
  temp->val = tempv;
  return (list);
}
