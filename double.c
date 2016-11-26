/*
** double.c for double in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 11:10:00 2016 Nathan Lebon
** Last update Sat Nov 26 12:15:13 2016 Nathan Lebon
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

t_dlist		*create_list()
{
  t_dlist	*new;

  new = malloc(sizeof(t_dlist));
  if (new != NULL)
    {
      new->len = 0;
      new->end = NULL;
      new->beg = NULL;
    }
  return (new);
}

t_dlist		*add_end(t_dlist *list, int val)
{
  t_node	*new;

  new = malloc(sizeof(t_node));
  if (new != NULL)
    {
      new->val = val;
      new->next = NULL;
      if (list->end == NULL)
	{
	  new->index = 1;
	  new->prev = NULL;
	  list->beg = new;
	  list->end = new;
	}
      else
	{
	  list->end->next = new;
	  new->prev = list->end;
	  new->index = new->prev->index + 1;
	  list->end = new;
	}
      list->len = list->len + 1;
    }
  return (list);
}

t_dlist		*add_beg(t_dlist *list, int val)
{
  t_node	*new;

  new = malloc(sizeof(t_node));
  if (new != NULL)
    {
      new->val = val;
      new->prev = NULL;
      if (list->end == NULL)
	{
	  new->index = 1;
	  new->next = NULL;
	  list->beg = new;
	  list->end = new;
	}
      else
	{
	  new->index = new->index + 1;
	  list->beg->prev = new;
	  new->next = list->beg;
	  list->beg = new;
	}
      set_index(list);
      list->len = list->len + 1;
    }
  return (list);
}

void		go_through(t_dlist *list, char *name)
{
  t_node	*temp;
  int		i;

  i = 0;
  my_putstr(name);
  my_putchar(':');
  if (list->len == 0)
    {
      my_putstr("\\0");
    }
  else if (list != NULL)
    {
      temp = list->beg;
      while (i < list->len - 1)
	{
	  print_int(temp->val);
	  temp = temp->next;
	  i = i + 1;
	  my_putchar(' ');
	}
      print_int(temp->val);
    }
  my_putchar('\n');
}
