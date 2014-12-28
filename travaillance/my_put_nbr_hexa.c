/*
** my_put_nbr_exa.c for exa in /home/moisse_r/BrightCode/moisse_r
**
** Made by Raphael Moisset
** Login   <moisse_r@epitech.net>
**
** Started on  Sat Dec 27 22:34:34 2014 Raphael Moisset
** Last update Sat Dec 27 23:13:05 2014 Raphael Moisset
*/

int	my_put_nbr_hexa(int nb)
{
  int	d;
  char	base[] = "0123456789ABCDEF";

  d = 1;
  if (nb < 0)
    {
      bc_write_char('-');
      nb = nb * -1;
    }
  while ((nb / d) >= 16)
    d = d * 16;
  while (d > 0)
    {
      bc_write_char(base[nb / d % 16]);
      d = d / 16;
    }
  return (0);
}
