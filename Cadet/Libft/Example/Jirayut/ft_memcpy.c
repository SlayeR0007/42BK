/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:10:12 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/28 16:49:03 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;

	if (dst == src)
		return (dst);
	ptr_dst = (unsigned char *) dst;
	while (n-- > 0)
	{
		*(ptr_dst++) = *(unsigned char *)src++;
	}
	return (dst);
}
