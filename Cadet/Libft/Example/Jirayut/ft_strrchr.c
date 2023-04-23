/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:03:46 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/19 23:59:28 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = NULL;
	while (*s)
	{
		if ((char) c == *s)
			start = (char *)s;
		s++;
	}
	if (c == *s)
		start = (char *)s;
	return (start);
}
