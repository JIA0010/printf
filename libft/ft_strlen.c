/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:32:18 by cjia              #+#    #+#             */
/*   Updated: 2023/06/13 10:26:43 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
	{
		a++;
	}
	return (a);
}

// int	main(void)
// {
// 	char *str = NULL;
// 	int length = ft_strlen(str);
// 	printf("Length: %d\n", length);

// 	return (0);
// }