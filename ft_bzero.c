/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:57:31 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/28 02:52:31 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main()
// {
// 	char str[6] = "hello";
// 	ft_bzero(str, 1);
// 	printf("%s\n", str);
// 	char str1[6] = "hello";
// 	bzero(str1, 1);
// 	printf("%s\n", str1);
// }
