/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:30:57 by marlengo          #+#    #+#             */
/*   Updated: 2023/11/28 00:56:29 by marlengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//write char c in file descriptor fd.
//use write system call to write char to fd.
//char c is passed as &c (his address memory location)
//1 = size is 1 byte.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
