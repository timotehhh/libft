/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:13:26 by trouger           #+#    #+#             */
/*   Updated: 2021/03/11 14:05:34 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strnstr(const char* big, const char* little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && len)
	{
		j = 0;
		while (big[i] && little[j] && big[i] == little[j] && len != 0)
		{
			i++;
			j++;
			len--;
		}
		if (little[j] == '\0' || len == 0)
			return ((char *)big + i - j);
		else if (j != 0)
		{
			len = len + j - 1;
			i = i - j;
		}
		i++;
		len--;
	}
	return (NULL);
}
