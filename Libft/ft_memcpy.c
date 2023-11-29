/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:37:09 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 12:32:17 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Purpose: copy n bytes from s2 to s1.
//Params: void *s1, const void *s2, size_t n
//*s1 = mem dest.
//*s2 = mem src (const for don't modify origin)
//size_t n = n bytes I want to copy.
//Return: s1 after copy.
void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char		*dest_s1;
	const unsigned char	*src_s2;

	dest_s1 = s1;
	src_s2 = s2;
	if (!s1 && !s2)
		return (NULL);
	while (n > 0)
	{
		*dest_s1 = *src_s2;
		++dest_s1;
		++src_s2;
		--n;
	}
	return (s1);
}
