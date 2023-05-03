/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:30:12 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/03 19:37:53 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To print a character
* @Params: c = Character
* @Return: 1 = Length of printed character
*/
int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

/*
* @Desc: To print a String
* @Params: str = String
* @Return: length = Length of printed String
*/
int	ft_putstr(char *str)
{
	size_t	length;

	length = 0;
	ft_putstr_fd(str, 1);
	length = ft_strlen(str);
	return (length);
}
