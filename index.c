/*
** index.c for index in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Mon Nov 21 13:07:31 2016 Nathan Lebon
** Last update Mon Nov 21 13:16:18 2016 Nathan Lebon
*/

#include <string.h>
#include "my.h"

t_dlist		*set_index(t_dlist *list)
{
  t_node	*node;

  node = list->beg->next;
  while (node != NULL)
    {
      node->index = node->prev->index + 1;
      node = node->next;
    }
}
