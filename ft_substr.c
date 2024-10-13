/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 17:09:45 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*copy;

	copy = (char *)malloc ((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		copy[j] = s[i];
		j++;
		i++;
	}
	copy[j] = '\0';
	return (copy);
}
