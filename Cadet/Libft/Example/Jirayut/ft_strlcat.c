/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:17:36 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 22:24:22 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	len_dst;
	size_t	len_app;

	if (dstsize == 0)
		return (ft_strlen(src));
	d = dst;
	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_app = 0;
	if (dstsize > ft_strlen(dst))
	{
		len_app = dstsize - ft_strlen(dst) - 1;
		d = &dst[ft_strlen(dst)];
		while (len_app-- >= 1 && *s != '\0')
			*(d++) = *(s++);
		*d = '\0';
	}
	else
		return (dstsize + ft_strlen(src));
	return (len_dst + ft_strlen(src));
}
