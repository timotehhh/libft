/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:16:22 by trouger           #+#    #+#             */
/*   Updated: 2021/03/12 14:23:55 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_find_len(char const *s1, char const *set)
{
	int i;
	int count;

	count = ft_strlen(s1) - 1;
	i = 0;
	while (ft_is_charset(s1[count], set) && count >= 0)
		count--;
	while (s1[i] && ft_is_charset(s1[i], set) && count >= 0)
	{
		count--;
		i++;
	}
	return (count);
}

static int	ft_find_end(char const *s1, char const *set)
{
	int i;

	i = ft_strlen(s1) - 1;
	while (ft_is_charset(s1[i], set) && i >= 0)
		i--;
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	int		end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_find_len(s1, set);
	i = 0;
	j = 0;
	end = ft_find_end(s1, set);
	if (!(result = malloc(sizeof(char) * size + 2)))
		return (NULL);
	result[size + 1] = '\0';
	while (ft_is_charset(s1[i], set) && i <= end)
		i++;
	while (i <= end)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	return (result);
}
