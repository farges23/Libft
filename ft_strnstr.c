/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 20:01:39 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	char	*aux;
	
	if (!big)
		return (NULL);
	if (little ==  '\0')
		return ((char *)big);
	i = 0;
	while ((i < len) && (big[i]))
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i] == little[0])
				return (char *)&big[i];
			j++;
		}
		i++;
	}
	return (NULL);
}
