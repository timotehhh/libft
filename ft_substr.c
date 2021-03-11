/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:14:53 by trouger           #+#    #+#             */
/*   Updated: 2021/03/11 21:29:22 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_size(size_t len, const char* s, unsigned int start)
{
	size_t	size;

	size = start;
	if (size >= ft_strlen(s))
		return (0);
	while (size < ft_strlen(s))
		size++;
	if (size > len)
		return (len + 1);
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	end;
	size_t	size;

	i = start;
	end = 0;
	size = ft_find_size(len, s, start);
	if (!(result = malloc(sizeof(char) * size)))
		return (NULL);
	while (end < len && i < ft_strlen(s))
	{
		result[end] = s[i];
		end++;
		i++;
	}
	result[end] = '\0';
	return (result);
}
