/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrast <rrast@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:35:36 by rrast             #+#    #+#             */
/*   Updated: 2022/03/17 13:28:24 by rrast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	ft_putnbr_unsign_fd(unsigned int n, int fd);
int	ft_putnbr_hex_fd(unsigned int n, int fd, char a);
int	ft_putnbr_hex_p_fd(unsigned long int n, int fd, char a);

#endif
