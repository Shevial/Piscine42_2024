/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:37 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/28 19:50:20 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (0);
	}
	while (src[i] != '\0' && i != size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{  
    int size = 20;
    char src[] = "Hola que tal? como te llamas?";
    char dest[size];

    int result = ft_strlcpy(dest, src, size);

    printf("El numero resultante es: %d\n", result);
    printf("%s", dest);
    return (0);
}*/
