/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:34:56 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/24 20:35:02 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		j;

	dest_len = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[j + dest_len] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}

void	ft_read_line(int fd, char *nb)
{
	int		read_size;
	char	buffer[1024];
	char	*save_read;

	(void)nb;
	read_size = 1;
	save_read = ft_strdup ("");
	while (read_size > 0)
	{
		read_size = read(fd, buffer, 126);
		buffer[read_size] = '\0';
		save_read = ft_strcat(save_read, buffer);
	}
}
