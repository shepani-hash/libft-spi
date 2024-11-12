/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:45 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 14:31:04 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	s = (char *)src;
	d = (char *)dst;
    if (d > s)
        while (len-- > 0)
            d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
// int main()
// {
//     char src[8] = "lhousse";
//     char dst[9] = "hekl";
//     printf("%s\n", ft_memmove(dst, src, 8));//what happen in overlap
//     char src1[8] = "lhousse";
//     char dst1[9] = "hekl";
//     printf("%s", memmove(dst1, src1, 8));//u need to handl that
// }
