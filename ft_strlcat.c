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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    size_t    dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dst_len >= dstsize)
        dst_len = dstsize;
    if (dst_len == dstsize)
        return (dstsize + src_len);
    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_len + src_len);
}
// int main()
// {
//     char dst[6] = "hello";
//     char src[7] = " world";
//     printf("%lu\n%s\n%s\n", ft_strlcat(dst, src, 6), dst, src);
//     char dst1[6] = "hello";
//     char src1[7] = " world";
//     printf("%lu\n%s\n%s", strlcat(dst1, src1, 6), dst1, src1);
// }
