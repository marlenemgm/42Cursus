/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:30:26 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/23 16:27:15 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
// test if it's a decimal digit char between zero and nine.
// return zero if isn't a decimal digit/ non zero int if is a decimal digit.
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
