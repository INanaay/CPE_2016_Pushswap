/*
** rotate_b.c for rotate_b in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 18:28:05 2016 Nathan Lebon
** Last update Wed Nov 16 18:41:49 2016 Nathan Lebon
*/

void	rra(t_dlist *la)
{
  int	temp;

  temp = la->end->val;
  remove_elem(la, la->len);
  add_beg(la, temp);
}

void	rrb(t_dlist *lb)
{
  int	temp;

  temp = lb->end->val;
  remove_elem(lb, lb->len);
  add_beg(la, temp);
}

void	rrr(t_dlist *la, t_dlist *lb)
{
  rra(la);
  rrb(lb);
  my_putstr("rrr");
}
