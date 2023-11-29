/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:59:05 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/29 08:25:51 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t ind_s1;
	size_t ind_s2;

	ind_s1 = 0;
	while (s1[ind_s1] && ind_s1 < n)
	{
		ind_s2 = 0;
		while (s2[ind_s2] && s1[ind_s1 + ind_s2] == s2[ind_s2] &&
			(ind_s1 + ind_s2) < n)
			ind_s2++;
		if (!s2[ind_s2])
			return ((char *)&s1[ind_s1]);
		ind_s1++;
	}
	if (!s2[0])
		return ((char *)&s1[ind_s1]);
	return (NULL);
}
