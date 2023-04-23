/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:40:01 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 23:00:06 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (letter);
	if (letter >= 'a' && letter <= 'z')
		return (letter - 32);
	return (letter);
}
