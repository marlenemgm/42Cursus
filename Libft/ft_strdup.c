/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:57:35 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 15:05:59 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t 	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)ft_calloc(len + 1, sizeof(char));
	if (dup == NULL)
		return (NULL);

	ft_memcpy(dup, s, len);
	return (dup);
}
