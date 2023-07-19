/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:35:47 by cjia              #+#    #+#             */
/*   Updated: 2023/07/19 15:42:11 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsignedintlen(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	printf_u(unsigned int nb)
{
	unsigned int	n;

	n = nb;
	if (n >= 10)
	{
		printf_u(n / 10);
		printf_u(n % 10);
	}
	else
		printf_c(n + '0');
	return (ft_unsignedintlen(nb));
}
