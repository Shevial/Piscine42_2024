/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:00:07 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/09 14:21:14 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter < 123)
	{
		write (1, &letter, 1);
		letter++;
	}
}

/*---- testing main function
	
int	main(){
	ft_print_alphabet();
}
*/
