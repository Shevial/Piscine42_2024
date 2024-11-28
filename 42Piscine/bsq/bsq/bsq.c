/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqsolver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:35:47 by sahevia-          #+#    #+#             */
/*   Updated: 2024/11/26 20:41:39 by sahevia-         ###   ########.fr       */
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

int	main(void)
{
	int		fd;
	int		read_size;
	char	buffer[1024];
	char	*save_read;

	printf("me ejecuto\n");
	fd = open("output.txt", O_RDONLY);
	read_size = 1;
	while (read_size > 0)
	{
		read_size = read(fd, buffer, 126);
		buffer[read_size] = '\0';
		save_read = ft_strcat(save_read, buffer);
	}
	printf("%s", save_read);
	return (0);
}
