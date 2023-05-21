/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:40:22 by jphonyia          #+#    #+#             */
/*   Updated: 2023/05/22 00:04:59 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*str;
	char	buff[10000];
	int		byte;

	fd = open("tester.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Cannot open file\n");
		return (1);
	}

	byte = read(fd, buff, 3);
	printf("byte : %d\n", byte);

	str = get_next_line(fd);
	printf("%s",str);
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	str = get_next_line(fd);
	printf("%s",str);
	str = get_next_line(fd);
	printf("%s",str);
	str = get_next_line(fd);
	printf("%s",str);
	str = get_next_line(fd);
	printf("%s",str);
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	return (0);
}
