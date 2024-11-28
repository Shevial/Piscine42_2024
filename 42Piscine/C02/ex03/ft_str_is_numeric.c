/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:02:29 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 18:42:11 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 47 || str[i] > 58)
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
	char teststr[] = "String with num 321";
	char teststr2[] = "555";
	char teststr3[] = "";
	
	ft_str_is_numeric(teststr);
	ft_str_is_numeric(teststr2);
	ft_str_is_numeric(teststr3);

	printf("Result for '%s': %d\n", teststr, ft_str_is_numeric(teststr));
    printf("Result for '%s': %d\n", teststr2, ft_str_is_numeric(teststr2));
    printf("Result for '%s': %d\n", teststr3, ft_str_is_numeric(teststr3));  
	return (0);	
}*/
