/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:30:12 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/06 15:29:27 by <natharav>       ###   ########.fr       */
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

/*
* @Desc: To find digit(length) of number
* @Params:	nbr = Number
*			base = Base of number (16)
* @Return: lenght = Length of number
*/
int	find_digit(unsigned long long nbr, int base)
{
	size_t	length;

	length = 0;
	while (nbr > 0)
	{
		nbr /= base;
		length++;
	}
	return (length);
}

/*
* @Desc: To input hex number to an allocated String
* @Params:	nbr = Decimal mumber
*			str = Allocated String
*			length = Length of string
*			base = Base of number (16)
* @Return: str = String of hexadecimal
*/
char	*to_str_hex(unsigned long long nbr, char *str, size_t length, int base)
{
	unsigned long long	mod;

	while (nbr > 0)
	{
		mod = nbr % base;
		if (mod < 10)
			str[length - 1] = mod + 48;
		else
			str[length - 1] = mod + (97 - 10);
		nbr /= base;
		length--;
	}
	return (str);
}

/*
* @Desc: To upper case the character of string
* @Params: str = Lower case string
* @Return: str = Upper case string
*/
char	*ft_str_to_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
