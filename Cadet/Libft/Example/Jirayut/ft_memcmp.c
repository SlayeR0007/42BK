/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:03:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 23:56:52 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*_s1;
	const unsigned char	*_s2;

	_s1 = s1;
	_s2 = s2;
	if (n != 0)
	{
		while (n--)
		{
			if (*_s1 != *_s2)
				return (*_s1 - *_s2);
			_s1++;
			_s2++;
		}
	}
	return (0);
}
