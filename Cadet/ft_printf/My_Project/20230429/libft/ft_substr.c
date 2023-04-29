/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:37:19 by natharav          #+#    #+#             */
/*   Updated: 2023/04/22 21:21:41 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len + start && (start + 1) <= ft_strlen(s))
		len = (size_t)(ft_strlen(s) - start);
	if (start + 1 > ft_strlen(s))
		len = 0;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		str[i++] = s[start++];
	}
	str[i] = 0;
	return (str);
}
