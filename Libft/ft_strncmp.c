/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:58:51 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 14:02:29 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while ((s1[ind] || s2[ind]) && ind < n)
	{
		if (s1[ind] != s2[ind])
			return ((unsigned char)s1[ind] - (unsigned char)s2[ind]);
		ind++;
	}
	return (0);
}
