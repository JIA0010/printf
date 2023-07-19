/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:16:43 by cjia              #+#    #+#             */
/*   Updated: 2023/07/19 15:54:22 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*create_str(unsigned long value, int *strlen)
{
	int				i;
	unsigned long	temp;
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

int	printf_p(unsigned long value, int asc)
{
	unsigned long	temp_val;
	char			*printout;
	int				str_len;
	int				*len_ptr;

	len_ptr = &str_len;
	temp_val = value;
	printout = create_str(value, len_ptr);
	if (!printout)
		return (0);
	while (temp_val != 0 && str_len-- >= 0)
	{
		if ((temp_val % 16) < 10)
			printout[str_len + 1] = (temp_val % 16) + 48;
		else
			printout[str_len + 1] = (temp_val % 16) + asc;
		temp_val = temp_val / 16;
	}
	str_len = ft_strlen(printout);
	str_len = str_len + printf_s("0x");
	ft_putstr_fd(printout, 1);
	free(printout);
	if (value == 0)
		str_len += printf_c('0');
	return (str_len);
}
