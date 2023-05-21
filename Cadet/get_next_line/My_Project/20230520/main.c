/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:40:22 by jphonyia          #+#    #+#             */
/*   Updated: 2023/05/21 16:36:08 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"

int	main()
{
	printf("=====hello========\n");
	int fd = open("tester.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Cannot open file\n");
		return (1);
	}
	printf("=====fd===========\nfd : %d\n",fd);
	char buff[1111111];
	int byte = read(fd, buff, 8);
	printf("=====byte=========\nbyte : %d\n",byte);
	printf("=====bye-bye======\n");
	printf("\n");

	char *str = get_next_line(fd);
	printf("%s",str);
	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));

	// printf("%s--\n", str);
	// while (1)
	// {
	// 	//printf("%i--:while (s)\n", fd);
	// 	char *str = get_next_line(fd);
	// 	if (!str)
	// 		break ;
	// 	printf("%s",str);
	// }

	return (0);
}
