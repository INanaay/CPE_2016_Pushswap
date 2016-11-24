/*
** my.h for my in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 11:05:46 2016 Nathan Lebon
** Last update Thu Nov 24 16:33:33 2016 Nathan Lebon
*/

#ifndef MY_H_
# define MY_H_

# define LA1 la->beg->val
# define LA2 la->beg->next->val
# define LB1 lb->beg->val
# define LB2 lb->beg->next->val

typedef struct		s_node
{
  int			index;
  int			val;
  struct s_node		*prev;
  struct s_node		*next;
}			t_node;

typedef struct		s_dlist
{
  unsigned int		len;
  struct s_node		*end;
  struct s_node		*beg;
}			t_dlist;

t_dlist		*elem_swap(t_dlist *, int, int);
void		my_putchar(char c);
void		*switch_list_elem(t_dlist *, t_dlist *);
void		my_putchar(char);
t_dlist		*create_list();
void		my_putstr(char *);
t_dlist         *remove_elem(t_dlist *, int);
void		pa(t_dlist *, t_dlist *);
t_dlist		*add_end(t_dlist *, int);
t_dlist		*add_beg(t_dlist *, int);
void		go_through(t_dlist *);
void		sa(t_dlist *);
void		sb(t_dlist *);
int		my_getnbr(char *);
void		rra(t_dlist *);
void		rrb(t_dlist *);
void		rrr(t_dlist *, t_dlist *);
void		sc(t_dlist *, t_dlist *);
void		pb(t_dlist *, t_dlist *);
t_dlist		*sort(t_dlist *, t_dlist *);
void		ra(t_dlist *);
t_dlist		*set_index(t_dlist *);
void		buff(char *, int, char);

#endif /* !MY_H_ */
