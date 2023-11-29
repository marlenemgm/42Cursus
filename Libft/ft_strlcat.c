/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:58:07 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 12:32:15 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*dst_d;
	const char		*src_s;
	size_t			len_dst;
	size_t			len_src;

	dst_d = (unsigned char *)dst;
	src_s = src;
	len_dst = 0;
	len_src = ft_strlen(src);
	while (*dst_d != '\0' && size > 0)
	{
		++dst_d;
		++len_dst;
		--size;
	}
	while (*src_s != '\0' && size > 1)
	{
		*dst_d++ = *src_s++;
		--size;
	}
	if (size > 0)
		*dst_d = '\0';
	return (len_dst + len_src);
}
