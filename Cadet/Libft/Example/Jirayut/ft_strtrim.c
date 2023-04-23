/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:11:23 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/20 15:19:32 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char const c, char const *set)
{
	while (*set)
		if (c == *(set++))
			return (1);
	return (0);
}

size_t	movefont(char const *str, char const *set)
{
	size_t	i;

	if (ft_strlen(str) == 0)
		return (0);
	i = 0;
	while (str[i])
	{	
		if (isset(str[i], set))
			i++;
		else
			break ;
	}
	return (i);
}

size_t	moveback(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	if (len == 0)
		return (0);
	i = len - 1;
	while (i > 0)
	{	
		if (isset(str[i], set))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	init;
	size_t	end;
	int		i;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	init = movefont(s1, set);
	end = moveback(s1, set);
	if (end < init)
		end = init;
	ptr = (char *)malloc(sizeof(char) * (end - init + 2));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (init <= end)
		ptr[i++] = s1[init++];
	ptr[i] = '\0';
	return (ptr);
}
