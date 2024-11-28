/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:23:04 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/20 21:18:35 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	if (b != 0)
	{
		temp = *a / *b;
		*b = *a % *b;
		*a = temp;
	}
}
/*---------------testing main function-----------------
int	main(void)
{
	int	f;
	int	s;

	f = 10;
	s = 5;

	printf("Valor antes:\n Primera variable: %d\n Segunda variable: %d\n", f, s);
	ft_ultimate_div_mod(&f, &s);
	printf("Valor despues:\n División:%d\n Resto: %d\n", f, s);
}*/
