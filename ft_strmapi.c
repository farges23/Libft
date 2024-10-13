/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/13 18:13:42 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		j;
	int		i;

	c = (char *)malloc(((ft_strlen (s)) + 1) * sizeof(char));
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		f(i, s[i]);
		c[j++] = s[i++];
	}
	c[j] = '\0';
	return (c);
}
