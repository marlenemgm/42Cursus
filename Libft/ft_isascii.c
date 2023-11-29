/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:06:41 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/24 21:43:40 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
//test if char is between 0-127.
//return zero if isn't ASCII char/ return non zero int it's an ASCII char.
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
