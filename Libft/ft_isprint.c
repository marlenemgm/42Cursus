/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:45:24 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/25 22:41:50 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
//test if a character is printable (32-126 ASCII value) or not.
//return zero if not printable/ return non zero int if it's printable.
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
