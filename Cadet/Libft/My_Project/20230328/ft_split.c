/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <umm_mvp@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:05:00 by natharav          #+#    #+#             */
/*   Updated: 2023/04/05 22:38:36 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tab_p = tab;
	tmp = s;
	while (*tmp)
	{
		while (*s == sep)
			s++;
		tmp = s;
		while (*tmp && *tmp != sep)
			tmp++;
		if (tmp > s || *tmp == sep)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			tab_p++;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			word_count++;
		while (*s && *s != c)
			s++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return(NULL);
	ft_allocate(split, s, c);
	return (split);
}
