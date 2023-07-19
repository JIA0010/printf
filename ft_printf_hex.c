/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:34:40 by cjia              #+#    #+#             */
/*   Updated: 2023/07/19 15:44:34 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*create_str(unsigned int value, int *strlen)
{
	size_t			i;
	unsigned int	temp;
	char			*str;

	i = 0;
	temp = value;
	while (temp != 0)
	{
		temp = temp / 16;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	*strlen = i - 1;
	return (str);
}

int	printf_hex(unsigned int value, int asc)
{
	unsigned int	temp_val;
	char			*printout;
	int				str_len;
	int				*len_ptr;

	len_ptr = &str_len;
	temp_val = value;
	printout = create_str(value, len_ptr);
	if (!printout)
		return (0);
	while (temp_val != 0)
	{
		if ((temp_val % 16) < 10)
			printout[str_len] = (temp_val % 16) + 48;
		else
			printout[str_len] = (temp_val % 16) + asc;
		temp_val = temp_val / 16;
		str_len--;
	}
	ft_putstr_fd(printout, 1);
	str_len = ft_strlen(printout);
	free(printout);
	if (value == 0)
		str_len += printf_c('0');
	return (str_len);
}
