/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:17:33 by cjia              #+#    #+#             */
/*   Updated: 2023/07/19 15:02:53 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		printf_p(unsigned long value, int asc);
int		printf_i(int n);
int		printf_u(unsigned int nb);
int		printf_hex(unsigned int value, int asc);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int		printf_c(char c);
int		printf_s(char *s);

#endif
