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
	char	*mv;

	mv = (char *)malloc(sizeof(char) * len);
	if (mv == NULL)
		return (NULL);
	ft_memcpy(mv, src, len);
	ft_memcpy(dst, mv, len);
	free(mv);
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
