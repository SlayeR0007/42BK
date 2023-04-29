/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:59:53 by natharav          #+#    #+#             */
/*   Updated: 2023/04/23 16:27:10 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_digit(int n)
{
	int	cur;

	cur = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cur++;
	while (n != 0)
	{
		n /= 10;
		cur++;
	}
	return (cur);
}

char	*ft_positive(char *ptr, int n)
{
	*ptr = '\0';
	while (n != 0)
	{
		*(--ptr) = '0' + n % 10;
		n = n / 10;
	}
	return (ptr);
}

char	*ft_negative(char *ptr, int n)
{
	*ptr = '\0';
	while (n != 0)
	{
		*(--ptr) = '0' - n % 10;
		n = n / 10;
	}
	*(--ptr) = '-';
	return (ptr);
}

char	*ft_o(char *ptr, size_t n)
{
	char	*temp;

	temp = ptr;
	while (n--)
	{
		*ptr++ = '0';
	}
	*ptr = '\0';
	return (temp);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		nl;
	int		len;

	nl = n;
	if (n < 0)
		nl *= -1;
	len = num_digit(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n != 0)
	{
		if (n > 0)
			return (ft_positive(&result[0] + len, n));
		if (n < 0)
			return (ft_negative(&result[0] + len, n));
	}
	return (ft_o(result, len));
}
