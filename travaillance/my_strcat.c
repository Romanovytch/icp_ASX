/*
** my_strcat.c for my_strcat in /home/moisse_r/rendu/Piscine_C_J07
**
** Made by Raphaël Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Wed Oct  8 11:49:58 2014 Raphaël Moisset
** Last update Sat Dec 27 17:26:41 2014 Raphael Moisset
*/

#include <stdlib.h>
#include "asx.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*izi;

  if (dest == NULL)
    {
      dest = src;
      return (dest);
    }
  i = 0;
  j = 0;
  izi = dest;
  while (dest[i])
      i = i + 1;
  while (src[j])
    j = j + 1;
  dest = malloc((j + i) * sizeof(char));
  i = 0;
  while (izi[i])
    {
      dest[i] = izi[i];
      i++;
    }
  dest[i] = ' ';
  i = i + 1;
  j = 0;
  while (src[j])
    {
      dest[i] = src[j];
      j = j + 1;
      i = i + 1;
    }
  return (dest);
}
