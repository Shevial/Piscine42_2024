/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:54:55 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/20 15:37:53 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/* ---------FT SWAP---------------
saving a value in tmp variable.
saving b value in a variable.
saving tmp value (a) in b variable.
*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = 5;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*------------------TESTING MAIN FUNCTION------------------
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Antes del swap:\n");
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("Después del swap:\n");
	printf("%d\n", a);
	printf("%d\n", b);
}*/
