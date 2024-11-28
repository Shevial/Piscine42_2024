/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:51:06 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/21 14:56:44 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*----------------TESTING MAIN FUNCTION---------------
int	main(void)
{
	int	firstnum;
	int	secondnum;
	int	savediv;
	int	savemod;

	firstnum = 124;
	secondnum = 16;
	ft_div_mod(firstnum, secondnum, &savediv, &savemod);
	printf("Variables despues de ft_div_mod: \n");
	printf("Division: %d\n", savediv);
	printf("Resto: %d\n", savemod);
	return (0);
}*/
