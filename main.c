/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 19:32:43 by ccosta            #+#    #+#             */
/*   Updated: 2013/12/09 20:06:10 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include "get_next_line.h"
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		lol;

	line = NULL;
	fd = open("get_next_line.h", O_RDONLY);
	while ((lol = get_next_line(fd, &line)) > 0)
		{
			ft_putendl(line);
		}
	close(fd);
	ft_putnbr(lol);
	return (0);
}
 
