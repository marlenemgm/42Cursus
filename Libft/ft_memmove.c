/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:55:40 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 11:21:02 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Purpose: copy n bytes from s2 to s1 without overlap (non destructive manner).
//Params: void *s1, const void *s2, size_t n
//*s1 = mem dest.
//*s2 = mem src (const for don't modify origin)
//size_t n = n bytes I want to copy.
//Return: s1 after copy.
void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char			*dest_s1;
	const unsigned char		*src_s2;

	dest_s1 = s1;
	src_s2 = s2;
	if (s1 == s2)
		return (s1);
	if (s1 < s2)
	{
		while (n-- > 0)
			*dest_s1++ = *src_s2++;
	}
	else
	{
		dest_s1 = dest_s1 + n;
		src_s2 = src_s2 + n;
		while (n-- > 0)
			*(--dest_s1) = *(--src_s2);
	}
	return (s1);
}
