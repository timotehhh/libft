/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:12:14 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/21 17:31:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		size;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(dest = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcpy(&dest[ft_strlen(s1)], s2);
	return (dest);
}
