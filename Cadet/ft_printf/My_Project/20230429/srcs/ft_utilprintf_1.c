/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:50:16 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/03 19:37:50 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: This fuction sends the variable to converse varia args and print out
* @Params:	ptr = List of the varia args
*			c = A symbol character for conversion
* @Return: length = length of printed out string
*/
int	conversion(va_list ptr, char c)
{
	size_t	length;

	length = 0;
	if (c == CHA_C)
		length = get_char(ptr);
	else if (c == CHA_S)
		length = get_str(ptr);
	else if (c == CHA_P)
		length = get_ptr(ptr);
	else if (c == CHA_D)
		length =
	else if (c == CHA_I)
		length =
	else if (c == CHA_U)
		length =
	else if (c == CHA_X_LOWER)
		length =
	else if (c == CHA_X_UPPER)
		length =
	else if (c == CHA_PERCENT)
		length =
	return (length);
}

/*
* @Desc: To get char variadic argument by conversion
* @Params: ptr = varia args
* @Return: length = length of printed out string
*/
int	get_char(va_list ptr)
{
	size_t	length;
	char	c;

	length = 0;
	c = va_arg(ptr, int);
	length = ft_putchar(c);
	return (length);
}

/*
* @Desc: To get string from varia args and print it out
* @Params: ptr = varia args
* @Return: length = length of printed out string
*/
int	get_str(va_list ptr)
{
	size_t	length;
	char	*str;

	length = 0;
	str = va_arg(ptr, char *);
	if (!str)
		str = STR_NULL;
	length = ft_putstr(str);
	return (length);
}

/*
* @Desc: To get void pointer in variadic argument by conversion  and print it out
* @Params: ptr = varia args
* @Return: length = length of printed out string
*
* This code did't return the same length of printf function when ptr = null
* Becuase (when type cast to int, the function was failed in MIN_LONG)
*
*/
int	get_ptr(va_list ptr)
{
	size_t	length;

}
