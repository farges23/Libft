/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 18:03:57 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = 0;
	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return ((char *)s + len);
	len = ft_strlen((char *)s);
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
