/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <umm_mvp@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:59:53 by natharav          #+#    #+#             */
/*   Updated: 2023/04/06 22:31:52 by natharav         ###   ########.fr       */
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
	if (n == 0)
		result[0] = '0';
	else
	{
		while (len-- && nl != 0)
		{
			result[len] = (nl % 10) + '0';
			nl = (nl - (nl % 10)) / 10;
		}
		if (n < 0)
			result[len] = '-';
	}
	return (result);
}
