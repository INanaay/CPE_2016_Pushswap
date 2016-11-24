/*
** buffer.c for buff in /home/lnanaay/Downloads/CPE_2016_Pushswap
** 
** Made by Nathan Lebon
** Login   <lnanaay@epitech.net>
** 
** Started on  Thu Nov 24 16:10:31 2016 Nathan Lebon
** Last update Thu Nov 24 16:21:34 2016 Nathan Lebon
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

void    buff(char *s, int n, char *c)
{
  int   i;

  i = 0;
  while (c[i])
    {
      s[n] = c[i];
      i = i + 1;
      n = n + 1;
    }
}
