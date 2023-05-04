/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:58:15 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/04 21:24:14 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: helper fuction of to make Hexadecimal to string by allcating of memory
* @Params:	nbr = the number that converse to Hexadecimal
*			base = base of the number
*			*str = A string to allocate
* @Return: String
*/
char	*make_hex(unsigned long long nbr, int base, char *str)
{
	size_t	length;

	length = 0;
	length = find_digit(nbr, base);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str = to_str_hex(nbr, str, length, base);
	str[length] = '\0';
	return (str);
}

/*
* @Desc: To print out integer number from variadic agrument
* @Params: ptr = Variadic argument
* @Return: lenght = Lenght of printed out string
*/
int	get_int(va_list ptr)
{
	size_t	length;
	int		_int;
	char	*str;

	length = 0;
	str = NULL;
	_int = va_arg(ptr, int);
	str = ft_itoa(_int);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: to print out unsigned decimal variadic agrument by conversion
* @Params: ptr = Variadic argument
* @Return: lenght = Lenght of printed out string
*/
int	get_unsigned_dec(va_list ptr)
{
	size_t			length;
	unsigned int	_unsigned_dec;
	char			*str;

	length = 0;
	str = NULL;
	_unsigned_dec = va_arg(ptr, int);
	if (_unsigned_dec == 0)
		return (putstr_null(str));
	str = ft_unsigned_tostr(_unsigned_dec);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}
