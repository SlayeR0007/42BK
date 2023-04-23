/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:18:39 by jphonyia          #+#    #+#             */
/*   Updated: 2023/03/01 02:51:28 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_need;
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	len_need = ft_strlen(needle);
	i = 0;
	while ((haystack[i] != '\0') && ((i + len_need) <= len))
	{
		if (ft_strncmp(&haystack[i], needle, len_need) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
