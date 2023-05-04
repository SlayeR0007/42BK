/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:53:40 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/04 21:24:10 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To print "0x0"
* @Params:	str = String
* @Return: Length of printed String
*/
int	putstr_null_form_memory(char *str)
{
	int length;

	length = 0;
	str = ft_strdup(STR_NULL_FORM_MEMORY);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print "0x"
* @Params:	str = String
* @Return: Length of printed String
*/
int	putstr_form_memory(char *str)
{
	int length;

	length = 0;
	str = ft_strdup(STR_FORM_MEMORY);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print "0"
* @Params:	str = String
* @Return: Length of printed String
*/
int putstr_null(char *str)
{
	int	length;

	length = 0;
	str = ft_strdup(STR_ZERO);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To allocate string from unsigned interger number
* @Params: n = Number
* @Return: String of number
*/
char	*ft_unsigned_tostr(unsigned int n)
{
	char	*ptr;
	int		base;
	int		len;
	int		i;

	base = 10;
	i = 0;
	len = find_digit(n, base);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	ptr[i] = '\0';
	while (n > 0)
	{
		ptr[++i] = '0' + (n % 10);
		n /= 10;
	}
	return (ft_reverse_str(ptr, len));
}

/*
* @Desc: To reverse String
* @Params:	ptr = String
* 			len = Length of String
* @Return:  String of number
*/
char	*ft_reverse_str(char *ptr, size_t len)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_calloc(2, sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		*tmp = ptr[i];
		ptr[i] = ptr[len];
		ptr[len] = *tmp;
		i++;
		len--;
	}
	if (tmp)
		free(tmp);
	return (ptr);
}
