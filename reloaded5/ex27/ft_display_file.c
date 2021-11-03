/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:42:06 by briffard          #+#    #+#             */
/*   Updated: 2021/11/03 15:39:24 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

//#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	ft_display_err(int nb)
{
	if (nb == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (nb > 2)
	{
		write(2, "Too many arguments.\n", 19);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf;

	ft_display_err(argc);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	else
	{
		while (read(fd, &buf, 1) != 0)
			write (1, &buf, 1);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
