/*
** main.c for main.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 12:50:03 2016 Nathan Lebon
** Last update Wed Nov 16 16:30:56 2016 Nathan Lebon
*/

#include "my.h"

t_dlist		*ini_list(int ac, char **av)
{
  t_dlist	*list;
  int		i;

  i = 1;
  list = create_list();
  while (i < ac)
    {
      add_end(list, my_getnbr(av[i]));
      i = i + 1;
    }
  go_through(list);
  elem_swap(list, 1, 2);
  go_through(list);
}

int	main(int ac, char **av)
{

  if (ac < 2)
    {
      my_putstr("temp message");
      return (0);
    }
  
  t_dlist	*list;
  /*
  list = create_list();
  add_end(list, my_getnbr(av[1]));
  add_end(list, my_getnbr(av[2]));
  go_through(list);
  */
  ini_list(ac, av);
}
