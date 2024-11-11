/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:03:42 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/27 21:57:17 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	l;	
	size_t			i;

	i = 0;
	l = (unsigned char)c;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = l;
		i++;
	}
	return (p);
}

// #include <string.h>
// int main()
// {	
// int k;
// ft_memset(&k, 1, 2);
// ft_memset(&k,189,1);
// printf("%d", k);
// }

