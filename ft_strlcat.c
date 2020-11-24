/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:01:31 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/16 17:00:19 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (count == 0)
		return (ft_strlen(src));
	while (dest[i])
		i++;
	while (src[j] && i + j < count - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < count)
		dest[i + j] = '\0';
	if (count < i)
		return (ft_strlen(src) + count);
	return (ft_strlen(src) + i);
}
