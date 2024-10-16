/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/14 03:15:41 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		j;
	int		i;

	c = (char *)malloc((ft_strlen (s) + 1) * sizeof(char));
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		c[j] = f(i, s[i]);
		j++;
		i++;
	}
	c[j] = '\0';
	return (c);
}
