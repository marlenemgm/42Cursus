/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:58:18 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 12:32:14 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*dst_d;
	const char		*src_s;

	dst_d = (unsigned char *)dst;
	src_s = src;
	if (size > 0 && dst != NULL)
	{
		while (*src_s != '\0' && size > 1)
		{
			*dst_d++ = *src_s++;
			--size;
		}
		*dst_d = '\0';
	}
	return (ft_strlen(src));
}
