/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:10:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/20 00:09:23 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*_dst;
	unsigned char	*_src;

	_dst = (unsigned char *)dst;
	_src = (unsigned char *)src;
	if (_src == _dst || len == 0)
		return (dst);
	if (_dst > _src)
	{
		_dst = _dst + (len - 1);
		_src = _src + (len - 1);
		while (len-- > 0)
			*_dst-- = *_src--;
		return (dst);
	}
	while (len-- > 0)
		*_dst++ = *_src++;
	return (dst);
}
