/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:55:49 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 11:21:05 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Purpose: Fill the first n blocks of memory with the specified int.
//Params: *b, c, n
//*b = pointer to memory block that I want fill.
//int c = value for fill.
//size_t n = n bytes I want to fill.
//Return: original pointer with memory blocks filled.

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ind;

	ind = b;
	while (n > 0)
	{
		*ind = (unsigned char)c;
		++ind;
		--n;
	}
	return (b);
}
