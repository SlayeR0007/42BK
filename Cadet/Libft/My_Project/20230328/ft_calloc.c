/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:28:20 by natharav          #+#    #+#             */
/*   Updated: 2023/04/01 18:35:22 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
