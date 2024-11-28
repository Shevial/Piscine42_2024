/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:35:22 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/11 19:10:34 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = 48;
	while (count < 58)
	{
		write(1, &count, 1);
		count++;
	}
}
/*-----testing main function
int	main(void)
{
	ft_print_numbers();
	return 0;

}
*/
