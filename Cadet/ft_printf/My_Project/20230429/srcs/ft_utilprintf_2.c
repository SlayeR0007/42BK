/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:58:15 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/06 15:55:04 by <natharav>       ###   ########.fr       */
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
	size_t	len;

	len = 0;
	len = find_digit(nbr, base);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	str = to_str_hex(nbr, str, len, base);
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

/*
* @Desc: The main fuction prints Hexadecimal variadic agrument by conversion
* @Params:	ptr = Variadic argument
*			is_lower = mode to print in lower or upper case String
* @Return: lenght = Lenght of printed out string
*/
int	get_hex(va_list ptr, int is_lower)
{
	size_t				length;
	int					base;
	unsigned long long	nbr;
	char				*str;

	length = 0;
	base = 16;
	str = NULL;
	nbr = va_arg(ptr, unsigned int);
	if (nbr == 0)
		return (putstr_null(str));
	str = make_hex(nbr, base, str);
	if (!is_lower)
		str = ft_str_to_upper(str);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print a symbol percent
* @Params:
* @Return: lenght = Lenght of printed out a character
*/
int	get_percent(void)
{
	size_t	length;

	length = 0;
	length = ft_putchar(CHA_PERCENT);
	return (length);
}
