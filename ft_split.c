/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:28:07 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 18:54:11 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_separator(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	ft_calculate_words(char *s, char charset)
{
	int		i;
	int		nb_words;
	int		is_word;

	is_word = 0;
	nb_words = 0;
	i = 0;
	while (s[i])
	{
		if (is_word == 0 && !(ft_is_separator(s[i], charset)))
		{
			nb_words++;
			is_word = 1;
		}
		if (ft_is_separator(s[i], charset))
		{
			i += 1;
			is_word = 0;
		}
		else
			i++;
	}
	return (nb_words);
}

static int	ft_calculate_size_words(char *s, char charset)
{
	int		i;
	int		nb_char;

	nb_char = 0;
	i = 0;
	while (s[i])
	{
		if (!(ft_is_separator(s[i], charset)))
			nb_char++;
		else
		{
			return (nb_char);
		}
		i++;
	}
	return (nb_char);
}

static char	**ft_freearrays(char **arrays)
{
	int i;

	i = 0;
	if (arrays)
	{
		while (arrays[i])
		{
			if (arrays[i] != NULL)
				free(arrays[i]);
			i++;
		}
		free(arrays);
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	int		array_char;
	int		nb_char;
	char	**arrays;

	i = 0;
	word = -1;
	if (!s || !(arrays = (char**)malloc((sizeof(char*)
	* ft_calculate_words((char *)s, c)) + 1)))
		return (NULL);
	while (++word < ft_calculate_words((char *)s, c))
	{
		while (ft_is_separator(s[i], c))
			i += 1;
		array_char = -1;
		nb_char = ft_calculate_size_words((char *)&(s[i]), c);
		if (!(arrays[word] = (char*)malloc((sizeof(char) * nb_char) + 1)))
			return (ft_freearrays(arrays));
		while (++array_char < nb_char)
			arrays[word][array_char] = s[i++];
		arrays[word][array_char] = '\0';
	}
	arrays[word] = NULL;
	return (arrays);
}
