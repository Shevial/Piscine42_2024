/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:32:19 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 18:51:36 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] <= 31) || str[i] == 127)
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
	char	teststr[] = "";
	char	teststr2[] = "Isd\ndsd";
	char	teststr3[] = "\n";

	ft_str_is_printable(teststr);
	ft_str_is_printable(teststr2);
	ft_str_is_printable(teststr3);

	printf("Result for: '%s': %d\n", teststr, ft_str_is_printable(teststr));
	printf("Result for: '%s': %d\n", teststr2, ft_str_is_printable(teststr2));
	printf("Result for: '%s': %d\n", teststr3, ft_str_is_printable(teststr3));
}*/
