/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:46:12 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/25 21:37:13 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	char *str = "  \t \t \n   \n\n\n\t";
	char *bite = ft_strtrim(str, " \n\t");

	printf("%s\n", bite);
	free(bite);
	return (0);
}
