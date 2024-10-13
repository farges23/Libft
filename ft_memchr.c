/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 17:09:45 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] != (unsigned char)c)
			i++;
		else
			return (&s1[i]);
	}
	return (NULL);
}
