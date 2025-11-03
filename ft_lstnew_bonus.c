/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:50:52 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/30 17:08:31 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my;

	my = malloc(sizeof(t_list));
	if (!my)
		return (NULL);
	my -> content = content;
	my -> next = NULL;
	return (my);
}
