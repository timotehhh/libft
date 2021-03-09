/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:13:02 by trouger           #+#    #+#             */
/*   Updated: 2021/03/09 15:13:05 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab_src;
	unsigned char	*tab_dest;

	i = 0;
	tab_dest = (unsigned char *)dest;
	tab_src = (unsigned char *)src;
	while (i < n)
	{
		tab_dest[i] = tab_src[i];
		if (tab_src[i] == (unsigned char)c)
			return (tab_dest + i + 1);
		i++;
	}
	return (NULL);
}
