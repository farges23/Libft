/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 18:04:55 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	size_t				i;
	unsigned const char	*source;

	destiny = dest;
	source = src;
	if (destiny > source)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destiny[i] = source[i];
		}
	}
	else if (destiny < source)
	{
		i = 0;
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (dest);
}
