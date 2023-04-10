/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <umm_mvp@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:39:39 by natharav          #+#    #+#             */
/*   Updated: 2023/04/10 22:08:27 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	if (!(elem = malloc((sizeof(t_list)))))
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

// int	main()
// {
// 	char	a[] = "abc";
// 	t_list	*test;

// 	test = ft_lstnew(a);
// 	printf("test : %s\n", test->content);
// 	free(test);
// 	return (0);
// }
