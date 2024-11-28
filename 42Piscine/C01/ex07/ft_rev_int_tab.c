/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:40:09 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/20 16:03:03 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	change;

	i = 0;
	while (i < size / 2)
	{
		change = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = change;
		i++;
	}
}
/*---------------TESTING MAIN FUNCTION--------------
int main(void)
{

	int	 testnum[] = {3, 0, 0, 1, 2, 0, 0, 1};
	int sz;
	int	i;

	i = 0;
	sz = 8;
	printf("El array antes de la función es: ");
	while(i < sz)
	{
    	printf("%d ", testnum[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(testnum, sz);
	printf("El array después de la función es: ");
	i = 0;
	while(i < sz)
    {
        printf("%d ", testnum[i]);
        i++;
    }
}*/
