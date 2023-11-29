/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:57:52 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 15:09:42 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = (char *)ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, len_s1);
	ft_memcpy(joined + len_s1, s2, len_s2);
	return (joined);
}
