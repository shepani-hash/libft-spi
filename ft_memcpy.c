/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:49:05 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/27 15:49:08 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memcpy(void * dst, const void * src, size_t n)
{
    size_t i;

    i = 0;
    char *d = (char *)dst;
    char *s = (char *)src;

    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);
}

// int main()
// {
//     char src[9] = "lhoussei";
//     char dst[9] = "heklklk";
//     printf("%s", ft_memcpy(dst, src, 8));//what happen in overlap
// }