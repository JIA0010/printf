/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjia <cjia@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:54:40 by cjia              #+#    #+#             */
/*   Updated: 2023/06/09 15:04:37 by cjia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	char str[10];

// 	printf("一文字入力せよ\n");
// 	scanf("%s", str); 
// 	if (str[1] != '\0')
// 		printf("複数文字ではなく、一文字のみいれてください\n");
// 	else
// 		printf("%d\n", ft_isalpha(str[0]));
// 	return (0);
// }