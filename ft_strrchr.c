/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 21:21:04 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + len);
	if (s == NULL)
		return (NULL);
	i = len - 1;
	while (i >= 0 && s[i])
	{
		if (s[i] != ((unsigned char)c))
			i--;
		else
			return ((char *) &s[i]);
	}
	return (NULL);
}
