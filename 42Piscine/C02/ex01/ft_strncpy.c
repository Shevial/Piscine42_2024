/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:49:36 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/27 21:30:28 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned	int n)
{
	unsigned int	i;	

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	copiar[] = "Esteees el string de prueba";
	char 	copiado[30];

	unsigned int numcop; 
	numcop = 5;
	printf("String in source: %s\n", copiar);
	ft_strncpy(copiado, copiar, numcop);
	printf("String in destiny: %s\n", copiado);
	return (0);	
}*/
