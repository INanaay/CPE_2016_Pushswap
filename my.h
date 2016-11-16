/*
** my.h for my in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Tue Nov 15 11:05:46 2016 Nathan Lebon
** Last update Tue Nov 15 13:12:34 2016 Nathan Lebon
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

#endif
