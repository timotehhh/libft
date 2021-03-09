/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:13:26 by trouger           #+#    #+#             */
/*   Updated: 2021/03/09 15:13:27 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_find_little(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] && little[j] && big[i] == little[j] && i < len)
		{
			j++;
			i++;
		}
		if (little[j] == '\0' && len > 0)
			return ((char *)big + (i - j));
		i++;
	}
	return (NULL);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == 0)
		return ((char *)big);
	if (!(ft_find_little(big, little, len)))
		return (NULL);
	return (ft_find_little(big, little, len));
}
