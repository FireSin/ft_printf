/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrast <rrast@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:46:16 by rrast             #+#    #+#             */
/*   Updated: 2021/11/19 16:44:04 by rrast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //DEL ME

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
