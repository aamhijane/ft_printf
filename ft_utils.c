/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayamhija <ayamhija@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:17:43 by ayamhija          #+#    #+#             */
/*   Updated: 2025/11/16 21:21:48 by ayamhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void  ft_putchar(const char c, int *count)
{
  write(1, &c, 1);
  (*count)++;
}

size_t  ft_strlen(const char *s)
{
  int i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}

void  ft_putstr(const char *s, int *count)
{
  write(1, s, ft_strlen(s));
  (*count) += ft_strlen(s);
}

void  ft_putnbr(int num, int *count)
{
  if (num == -2147483648)
  {
    ft_putstr("-2147483648", count);
    return ;
  }
  if (num < 0)
  {
    num = -num;
    ft_putchar('-', count);
  }
  if (num > 9)
    ft_putnbr(num / 10, count);
  ft_putchar((num % 10) + '0', &(*count++));
}

void  ft_putnbr_unsigned(unsigned int num, int *count)
{
  if (num > 9)
    ft_putnbr(num / 10, count);
  ft_putchar((num % 10) + '0', &(*count++));
}

void	ft_print_hex(unsigned long n, int *count, unsigned int is_upper)
{
  char  *hex;

  hex = "0123456789abcdef";
  if (is_upper)
    hex = "0123456789ABCDEF";
  if (n >= 16)
    ft_print_hex(n / 16, count, is_upper);
  ft_putchar(hex[n % 16], &(*count++));
}

void	ft_print_addr(void *addr, int *count)
{
  if (addr == 0)
  {
  	ft_putstr("(nil)", count);
	return ;
  }
  ft_putstr("0x", count); 
  ft_print_hex((unsigned long)addr, count, 0);
}
