/*
** my_getnbr.c for getnbr in /home/lnanaay/CPool_Day07
** 
** Made by LEBON Nathan
** Login   <lnanaay@epitech.net>
** 
** Started on  Fri Oct 14 14:36:30 2016 LEBON Nathan
** Last update Fri Oct 14 15:55:17 2016 LEBON Nathan
*/

int	countnb(char *s)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (s[i] != '\0')
    {
      if (s[i] >= '0' && s[i] <= '9')
	count = count + 1;
      i = i + 1;
    }
  return (count);
}

int	my_getnbr(char *str)
{
  int	i;
  int	n;
  int	nb;

  i = 0;
  n = 0;
  nb = 0;
  if (countnb(str) > 5)
    return (0);
  else
    {
      while (str[i] < '0' || str[i] > '9')
	{
	  if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	    n = 1;
	  i = i + 1;
	}
      while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
	  nb = nb * 10 + (str[i] - 48);
	  i = i + 1;
	}
      if (n == 1)
	return (- nb);
      return (nb);
    }
}
