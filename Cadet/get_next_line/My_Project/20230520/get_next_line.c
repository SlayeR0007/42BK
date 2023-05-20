/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:09:21 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/20 19:33:02 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 *  @overview: This function reads the contents of a file descriptor
 * 				and returns a single string corresponding to one line
 * 				of the file per function call.
 *
 *	@params: fd is file descriptor that identifies an open file in
 *				a running process. It serves as a "handle"
 *				or reference to a file.
 *				0 = reserved for standard input (stdin)
 *				1 = reserved for standard output (stdout)
 *				2 = reserved for standard error (stderr)
 *
 * 	@return:  The string returned includes a newline character
 * 				(Except: No newline provides)
 * 			NULL, when str gets NULL from read_file_line,
 * 					delete_one_line functions
 * 			NULL, when invalid file fd, BUFFER SIZE <= 0 (NO read)
 *
*/
char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	str = read_file_line(fd, str);
	if (!str)
		return (NULL);
	line =
}

/**
 *  @todo: Read content from the file descriptor into a buffer string,
 * 			then append buffer strings to a static string.
 *
 *	@params: fd is file descriptor
 *	@params: str is a String
 *
 *
 * 	@return: String that contains content.
 * 			NULL, when it cannot allocate memory.
 * 			NULL, "byte" read less than 0, which means End of file
 *
*/
char	*read_file_line(int fd, char *str)
{
	int		byte;
	char	*buff;

	byte = BYTE;
	if (!str)
		str = ft_calloc(1, 1);
	buff = ft_callloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buff)
		return (NULL);
	while (byte > 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte < 0)
		{
			free(buff);
			return (NULL);
		}
		buff[byte] = NULL;
		str = append_to_str(str, buff);
		if (!str || is_newline(buff))
			break;
	}
	free(buff);
	return (str);
}
