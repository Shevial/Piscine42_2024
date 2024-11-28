/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:33:56 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/24 20:34:45 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src);
void	ft_read_line(int fd, char *nb);

int	ft_validate_number_format(char	*str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
	{
		write(2, "Null char or empty string\n", 27);
		return (1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Not valid character in argument\n", 33);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_validate_dictionary(char *dictionary)
{
	(void)dictionary;
	return (1);
}

int	main(int ac, char **av)
{
	int		fd;
	char	*nb;

	fd = 0;
	nb = "";
	if (ac == 2 || ac == 3)
	{
		if (ac == 2 && ft_validate_number_format(av[2]))
		{
			fd = open(av[1], O_RDONLY);
			nb = ft_strdup(av[2]);
		}
		else if (ac == 3 && ft_validate_number_format(av[1]))
		{
			fd = open("numbers.dict", O_RDONLY);
			nb = ft_strdup(av[1]);
		}
		ft_read_line(fd, nb);
		free(nb);
		close(fd);
	}
	return (0);
}
