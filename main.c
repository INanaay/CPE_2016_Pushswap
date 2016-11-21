/*
** main.c for main.c in /home/lnanaay/projets/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Wed Nov 16 12:50:03 2016 Nathan Lebon
** Last update Mon Nov 21 19:03:10 2016 Nathan Lebon
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
  printf("%i", is_minor(la));
  my_putchar('l');
}

int	main(int ac, char **av)
{

  if (ac < 2)
    {
      my_putstr("temp message");
      return (0);
    }
  ini_list(ac, av);
}
