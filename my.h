/*
** my.h for my in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 11:05:46 2016 Nathan Lebon
** Last update Wed Nov 16 14:55:50 2016 Nathan Lebon
*/

#ifndef MY_H_
#define MY_H_

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
void		*pa(t_dlist *, t_dlist *);

#endif
