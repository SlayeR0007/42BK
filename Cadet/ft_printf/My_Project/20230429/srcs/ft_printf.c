/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:58:00 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/03 19:03:01 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To initialize variadict funtion and invoke function to_print
* @Params: *data = String data will print, including with cspduxIX%
* @Params: variadic argument = ...
* @Return: length = the length of print out
*/
int	ft_printf(const char *data, ...)
{
	size_t		length;
	const char	*str;
	va_list		ptr;

	str = ft_strdup(data);
	va_start(ptr, data);
	length = to_print(ptr, str);
	va_end(ptr);
	if (str)
		free (str);
	return (length);
}

/*
* @Desc: To print string and to converse varia arg
* @Params:	ptr = list of the variadic argument
*			str = string data from ft_print
* @Return:	length = length of string
*/
int	to_print(va_list ptr, char *str)
{
	size_t	length;

	length = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			length += conversion(ptr, *str);
		}
		else
			length += ft_putchar(*str);
		str++;
	}
	return (length);
}
