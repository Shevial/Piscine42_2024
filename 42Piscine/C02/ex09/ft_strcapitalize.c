/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:42:48 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/28 19:20:20 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		if (str[i - 1] == 32 && str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		if (str[i - 1] == 43 && str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		if (str[i - 1] == 45 && str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	strungs[] = "ARREGLA, nte-dFeux; ciFnquante+et+un";
	
	printf("%s\n", strungs);
	ft_strcapitalize(strungs);
	printf("%s\n", strungs);
	return(0);
}*/
