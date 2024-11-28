/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:49:47 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 18:34:29 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	teststr[] = "qwertyuiopasdfghjklzxcvbnm";
	char	teststr2[] = "Testing is alpha 2";
	char	teststr3[] = "Testing .....";
	char	teststr4[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char    teststr5[] = "";

	ft_str_is_alpha(teststr);
    ft_str_is_alpha(teststr2);
    ft_str_is_alpha(teststr3);
	ft_str_is_alpha(teststr4);
	ft_str_is_alpha(teststr5);

	printf("Result for '%s' : %d\n", teststr, ft_str_is_alpha(teststr));
    printf("Result for '%s' : %d\n", teststr2, ft_str_is_alpha(teststr2));
    printf("Result for '%s' : %d\n", teststr3, ft_str_is_alpha(teststr3));
	printf("Result for '%s' : %d\n", teststr4, ft_str_is_alpha(teststr4));
    printf("Result for '%s' : %d\n", teststr5, ft_str_is_alpha(teststr5));
}*/
