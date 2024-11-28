/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:13:24 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 18:49:18 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char teststr[] = "Testing string 1";
	char teststr2[] = "TESTINGSTRINGTWO";
	char teststr3[] = "testing string three";

	ft_str_is_uppercase(teststr);
    ft_str_is_uppercase(teststr2);
    ft_str_is_uppercase(teststr3);

	printf("Result for: '%s': %d\n", teststr, ft_str_is_uppercase(teststr));
    printf("Result for: '%s': %d\n", teststr2, ft_str_is_uppercase(teststr2));
    printf("Result for: '%s': %d\n", teststr3, ft_str_is_uppercase(teststr3));
}*/
