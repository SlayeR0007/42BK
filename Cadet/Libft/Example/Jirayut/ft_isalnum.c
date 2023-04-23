/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:56:11 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 09:27:26 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	if (letter >= '0' && letter <= '9')
	{
		return (1);
	}
	return (0);
}