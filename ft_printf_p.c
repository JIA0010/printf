/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:16:43 by cjia              #+#    #+#             */
/*   Updated: 2023/07/22 10:32:09 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_ptr(uintptr_t nb)
{
	while (nb >= 16)
	{
		rec_ptr(nb / 16);
		nb %= 16;
	}
	lowercase_hex(nb);
}

int	printf_p(uintptr_t nb)
{
	int	len;

	len = 0;
	write(1, "0x", 2);
	rec_ptr(nb);
	if (nb == 0)
		len = 1;
	else
	{
		while (nb > 0)
		{
			nb /= 16;
			len++;
		}
	}
	return (len + 2);
}
