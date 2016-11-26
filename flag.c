/*
** flag.c for flqg in /home/lnanaay/Downloads/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Nov 25 10:56:23 2016 Nathan Lebon
** Last update Fri Nov 25 11:59:53 2016 Nathan Lebon
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

int     my_strcmp(char *s1, char *s2)
{
  char  *p1;
  char  *p2;

  p1 = s1;
  p2 = s2;
  while (*p1 != '\0')
    {
      if (*p2 == '\0')
	return (1);
      if (*p2 > *p1)
	return (-1);
      if (*p1 > *p2)
	return (1);
      p1 = p1 + 1;
      p2 = p2 + 1;
    }
  if (*p2 != '\0')
    return (-1);
  return (0);
}

t_dlist         *finish_sort_v(t_dlist *la, t_dlist *lb, int i, char *s)
{
  int           b;

  b = 0;
  if (lb->len > 0)
    b = 1;
  while (lb->len != 0)
    {
      buff(s, i, "pa");
      pa(la, lb);
      go_through(la, "la");
      go_through(lb, "lb");
      i = i + 3;
    }
  if (b == 1)
    i = i - 3;
  my_putchar('\n');
  write(1, s, i - 1);
}

t_dlist         *sort_v(t_dlist *la, t_dlist *lb, int i, char *s)
{
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
      go_through(la, "la");
      go_through(lb, "lb");
      i = i + 2;
      buff(s, i, " ");
      i = i + 1;
    }
  finish_sort_v(la, lb, i, s);
}

t_dlist         *ini_list_v(int ac, char **av)
{
  t_dlist       *la;
  t_dlist       *lb;
  int           i;
  char		*s;

  i = 2;
  s = malloc(sizeof (char) * (10000000));
  la = create_list();
  lb = create_list();
  while (i < ac)
    {
      add_end(la, my_getnbr(av[i]));
      i = i + 1;
    }
  sort_v(la, lb, 0, s);
  my_putchar('\n');
}
