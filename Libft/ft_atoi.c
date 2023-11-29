/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:51:32 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 15:05:47 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	get_sign(const char **str)
{
	int	sign;
	
	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

static long long	calculate_result(const char *str, int sign)
{
	long long	result;
	
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;

	int sign = get_sign(&str);

	long long result = calculate_result(str, sign);

	if (result > INT_MAX || result < INT_MIN)
	{
		int *overflow = (int *)ft_calloc(1, sizeof(int));
		return (*overflow);
	}
	else
		return ((int)result);
}