/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:11:55 by trouger           #+#    #+#             */
/*   Updated: 2021/03/09 15:11:56 by trouger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new1;

	if (!(new1 = malloc(sizeof(t_list))))
		return (NULL);
	new1->content = content;
	new1->next = NULL;
	return (new1);
}
