/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:22:39 by natharav          #+#    #+#             */
/*   Updated: 2023/04/01 13:22:41 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize - 1 > dst_len && dstsize > 0)
	{
		while (src[i] && dst_len + i < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = 0;
	}
	if (dstsize <= dst_len)
		dst_len = dstsize;
	return (dst_len + src_len);
}
