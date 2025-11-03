/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:19:20 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/30 15:22:23 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*all;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		all = malloc(1);
		if (!all)
			return (NULL);
		return (all);
	}
	all = malloc((nmemb * size));
	if (!all)
		return (NULL);
	ft_bzero(all, (nmemb * size));
	return (all);
}
