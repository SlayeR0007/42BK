/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:38:44 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 16:50:22 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src && dstsize != 1)
	{
		*dst++ = *src;
		dstsize--;
		src++;
	}
	*dst = '\0';
	return (len);
}
