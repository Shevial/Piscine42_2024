/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:51:34 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/11 19:11:10 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 122;
	while (letter > 96)
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*---- testing main function

int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;

}*/
