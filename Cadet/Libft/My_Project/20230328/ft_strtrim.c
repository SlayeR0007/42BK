/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:05:39 by natharav          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:39 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

#include "libft.h"

static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	s1_len;
	int	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1);
	if (i == s1_len)
		return (empty_string());
	s1_len = s1_len - 1;
	while (s1[s1_len] && ft_strchr(set, s1[s1_len]))
	{
		s1_len--;
	}
	return (ft_substr(s1, i, s1_len - i + 1));
}
