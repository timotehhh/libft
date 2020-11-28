/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:46:12 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 19:54:14 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	char	*bite = "biteioiioioqwiqwhjkdahjk";
	printf("\n%s", ft_strjoin("\0", bite));
	return (0);
}
