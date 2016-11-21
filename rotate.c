/*
** rotate.c for rotate in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 18:11:21 2016 Nathan Lebon
** Last update Fri Nov 18 12:16:45 2016 Nathan Lebon
*/

#include "my.h"
#include <string.h>

void	ra(t_dlist *la)
{
  int	temp;

  temp = la->beg->val;
  remove_elem(la, 1);
  add_end(la, temp);
}

void	rb(t_dlist *lb)
{
  int	temp;

  temp = lb->beg->val;
  remove_elem(lb, 1);
  add_end(lb, temp);
}

void	rr(t_dlist *la, t_dlist *lb)
{
  ra(la);
  rb(lb);
  my_putstr("rr");
}
