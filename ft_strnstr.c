/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:13:26 by trouger           #+#    #+#             */
/*   Updated: 2021/03/12 18:20:08 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_check_error(const char *little, const char *big)
{
	if (ft_strlen(little) > ft_strlen(big))
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	return (NULL);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = len;
	i = -1;
	while (big[++i] && len)
	{
		j = 0;
		while (big[i] && little[j] && big[i] == little[j] && len != 0)
		{
			i++;
			j++;
			len--;
		}
		if (little[j] == '\0' && i <= size)
			return ((char *)big + i - j);
		else if (j != 0)
		{
			len = len + j;
			i = i - j;
		}
		len--;
	}
	return (ft_check_error(little, big));
}
