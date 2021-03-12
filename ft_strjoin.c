/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:14:01 by trouger           #+#    #+#             */
/*   Updated: 2021/03/12 14:21:36 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenbis(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (2);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j - 1);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

	i = -1;
	j = -1;
	if (!s1)
		return (NULL);
	if (!(result = malloc(sizeof(char) * ft_strlenbis(s1, s2))))
		return (NULL);
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		result[0] = '\0';
		result[1] = '\0';
		return (result);
	}
	while (s1[++i])
		result[i] = s1[i];
	while (s2[++j])
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
