/*
** main.c for main.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 12:50:03 2016 Nathan Lebon
** Last update Sat Nov 26 12:22:06 2016 Nathan Lebon
*/

#include "my.h"

t_dlist		*ini_list(int ac, char **av)
{
  t_dlist	*la;
  t_dlist	*lb;
  int		i;

  i = 1;
  la = create_list();
  lb = create_list();
  while (i < ac)
    {
      add_end(la, my_getnbr(av[i]));
      i = i + 1;
    }
  sort(la, lb, 0);
  my_putchar('\n');
}

int	main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putchar('\n');
      return (0);
    }
  else if (my_strcmp(av[1], "-v") == 0)
    {
      ini_list_v(ac, av);
    }
  else
    {
      ini_list(ac, av);
    }
  return (0);
}
