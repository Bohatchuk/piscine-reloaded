/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:04:27 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/29 20:04:45 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUF_SIZE 1024

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		file_open;
	int		buf_rec;
	char	buffer[BUF_SIZE + 1];

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		file_open = open(argv[1], O_RDONLY);
		if (file_open == -1)
		{
			write(1, "No file.\n", 9);
		}
		else
		{
			while ((buf_rec = read(file_open, buffer, BUF_SIZE)))
			{
				buffer[buf_rec] = '\0';
				ft_putstr(buffer);
			}
		}
	}
	return (0);
}
