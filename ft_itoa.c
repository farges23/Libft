/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farges <farges@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:09:45 by farges            #+#    #+#             */
/*   Updated: 2024/10/14 03:42:47 by farges           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	i = ft_counter(n);
	new = (char *) malloc ((i + 1) * sizeof(char));
	if (!new)
		return (NULL);
	if (n == 0)
		new[0] = '0';
	if (n < 0)
	{
		n = -n;
		new[0] = '-';
	}
	new[i] = '\0';
	while (n > 0)
	{
		new[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (new);
}
