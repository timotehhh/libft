
#include "libft.h"

static int	ft_find_size(char const *s, unsigned int start, size_t len)
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
	int		i;
	int		j;
	char	*result;
	
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(result = malloc(sizeof(char) * ft_find_size(s, start, len))))
		return (NULL);
	while (s[i])
	{
		if (i >= (int)start && j < (int)len)
		{
			result[j] = s[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}
