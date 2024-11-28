/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:51:27 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/11 19:09:35 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
	{
	char	positive;
	char	negative;

	if (n >= 0)
	{
		positive = 'P';
		write (1, &positive, 1);
	}
	else
	{
		negative = 'N';
		write (1, &negative, 1);
	}
}

/*		-----testing main function-----
int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(-9);
	return 0;
}
*/
