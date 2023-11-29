/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:59:15 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 13:12:06 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ind;

	ind = s + ft_strlen(s);
	while (ind >= s)
	{
		if (*ind == (char)c)
			return ((char *)ind);
		ind--;
	}
	return (NULL);
}
