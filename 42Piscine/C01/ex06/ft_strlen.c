/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:08:05 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/20 15:57:07 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*------------Testing main function------------------
int main(void)
{

	char	*phrase;
	
	phrase = "Mi perra Celta es preciosa";
	printf("Tu string tiene este num de caracteres: %d\n", ft_strlen(phrase));
	ft_strlen(phrase);

}*/
