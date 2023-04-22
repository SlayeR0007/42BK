/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:39:39 by natharav          #+#    #+#             */
/*   Updated: 2023/04/22 16:36:10 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc((sizeof(t_list)));
	if (!elem)
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
