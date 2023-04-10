/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <umm_mvp@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:39:39 by natharav          #+#    #+#             */
/*   Updated: 2023/04/10 22:22:55 by natharav         ###   ########.fr       */
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
// 	t_list	*head;

// 	head = ft_lstnew(a);
// 	printf("head : %s\n", head->content);
// 	free(head);
// 	return (0);
// }