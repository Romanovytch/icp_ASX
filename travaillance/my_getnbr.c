/*
** my_getnbr.c for my_getnbr in /home/moisse_r/rendu/Piscine_C_J04
**
** Made by Raphaël Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Fri Oct  3 12:29:06 2014 Raphaël Moisset
** Last update Mon Nov 24 13:47:45 2014 Raphael Moisset
*/

int	neg(char *str)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
	c = c + 1;
      i = i + 1;
    }
  if (c % 2 != 0)
    return (1);
  else
    return (0);
}

int	num(char d)
{
  if (d >= '0' && d <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  nb = 0;
  i = 0;
  while (num(str[i]) == 0)
    i = i + 1;
  while (num(str[i]) == 1)
    {
      nb = ((nb * 10) * (str[i] - 48));
      i = i + 1;
    }
  if (neg(str) == 1)
    nb = -nb;
  return (nb);
}
