/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:23:42 by natharav          #+#    #+#             */
/*   Updated: 2023/04/01 13:53:36 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		k = (haystack[i + j] == needle[j]);
		while (haystack[i + j] && needle[j] && k && i + j < len)
		{
			k = (haystack[i + j] == needle[j]);
			j++;
		}
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
