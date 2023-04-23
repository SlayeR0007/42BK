/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:58:51 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/25 15:05:26 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*element;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		element = ft_lstnew(f(lst -> content));
		if (element == NULL)
		{
			ft_lstclear(&element, del);
			return (NULL);
		}
		ft_lstadd_back(&head, element);
		lst = lst -> next;
	}
	return (head);
}
