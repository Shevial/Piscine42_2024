/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:49:41 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/20 21:39:31 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	aux;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		size--;
	}
}
/*---------------TESTING MAIN FUNCTION----------
int main(void)
{
	int	testsort[]= {6, 0, 5, 0, 4, 8, 5, 1, 6};
	int	sz;
	int i;

	i = 0;
	sz = 8;
	printf("El array antes de ordenarse:");
	while(i<sz)
	{
		printf("%d", testsort[i]);
		i++;
	}
 	printf("\n");
	ft_sort_int_tab(testsort, sz);
	printf("El array despues de ordenarse:");
	i = 0;
	while(i< sz)
	{
		printf("%d", testsort[i]);
		i++;
	}
}*/
