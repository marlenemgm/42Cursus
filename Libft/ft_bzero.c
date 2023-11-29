/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:52:03 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 10:42:06 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Purpose: Fill the first n blocks of memory with '0'.
//Params:
//*s = pointer to memory block that I want fill.
//size_t n = n bytes I want to fill.
//Return: nothing.
//use ft_memset to fill with 1byte for fill with '0'.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	c;

	c = 0;
	while (n > 0)
	{
		ft_memset(s, c, 1);
		++s;
		--n;
	}
}
