/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:41:10 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 10:00:47 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (letter + 32);
	if (letter >= 'a' && letter <= 'z')
		return (letter);
	return (letter);
}
