/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:00:46 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/26 20:17:41 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + 48);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b +1;
			while (c < 10 && c != a)
			{
				ft_putnbr(a);
				ft_putnbr(b);
				ft_putnbr(c);
				if (a < 7 || b < 8 || c < 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main (void){

	ft_print_comb();
	return 0;
}*/
