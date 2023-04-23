/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 18:10:44 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_number(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}	
	return (count);
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
	char	*ptr;
	size_t	len;

	len = len_number(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (n > 0)
		return (ft_positive(&ptr[0] + len, n));
	if (n < 0)
		return (ft_negative(&ptr[0] + len, n));
	return (ft_o(ptr, len));
}
