/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:28:07 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/30 00:23:46 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwords(char const *s, char c)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			w++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (w);
}

static int	ft_sizestr(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i + 1);
}

static char	**ft_freearrays(char **arrays)
{
	int w;

	w = 0;
	if (arrays)
	{
		while (arrays[w])
		{
			if (arrays[w] != NULL)
				free(arrays[w]);
			w++;
		}
		free(arrays);
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**arrays;
	int		w;
	int		i;
	int		count;

	if (!s || !c || !(arrays = (char **)malloc(sizeof(char *)
	* (ft_nbwords(s, c) + 1))))
		return (NULL);
	count = ft_nbwords(s, c);
	w = 0;
	while (w < count)
	{
		i = 0;
		while (*s == c)
			s++;
		if (!(arrays[w] = (char *)malloc(sizeof(char) * (ft_sizestr(s, c)))))
			return (ft_freearrays(arrays));
		while (*s && *s != c)
			arrays[w][i++] = *s++;
		arrays[w++][i] = '\0';
		while (*s == c)
			s++;
	}
	arrays[w] = NULL;
	return (arrays);
}
