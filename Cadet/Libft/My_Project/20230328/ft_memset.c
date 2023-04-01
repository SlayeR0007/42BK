/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:21:24 by natharav          #+#    #+#             */
/*   Updated: 2023/04/01 13:21:26 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_data;
	size_t	i;

	b_data = (char *)b;
	i = 0;
	while (i < len)
	{
		b_data[i] = c;
		i++;
	}
	return (b);
}
