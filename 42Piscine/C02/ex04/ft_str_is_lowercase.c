/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:55:02 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 18:45:51 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char teststr[] = "String de prueba con MAYUS";
	char teststr2[] = "123456789";
	char teststr3[] = "onlyminus";
	
	ft_str_is_lowercase(teststr);
    ft_str_is_lowercase(teststr2);
    ft_str_is_lowercase(teststr3);
	
	printf("Result for '%s': %d\n", teststr, ft_str_is_lowercase(teststr));
	printf("Result for '%s': %d\n", teststr2, ft_str_is_lowercase(teststr2));
	printf("Result for '%s': %d\n", teststr3, ft_str_is_lowercase(teststr3));

}*/
