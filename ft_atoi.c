/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikoubaz <yikoubaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:56:33 by yikoubaz          #+#    #+#             */
/*   Updated: 2025/10/26 17:12:53 by yikoubaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itsspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *nptr)
{
	int				s;
	long long		cv;
	long long		temp;

	s = 1;
	cv = 0;
	while (ft_itsspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s = -s;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		temp = cv;
		cv = (cv * 10) + (*nptr - 48);
		if (cv < temp && s == 1)
			return (-1);
		if (cv < temp && s == -1)
			return (0);
		nptr++;
	}
	return ((int)cv * s);
}
