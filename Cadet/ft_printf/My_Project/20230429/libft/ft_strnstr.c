/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:23:42 by natharav          #+#    #+#             */
/*   Updated: 2023/04/22 20:54:42 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_need;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	len_need = ft_strlen(needle);
	while (haystack[i] && (i + len_need) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, len_need) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
