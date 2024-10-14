/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/14 05:01:25 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (!big)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	n = ft_strlen(little);
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && len > (i + j))
		{
			j++;
			if (n == j)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
