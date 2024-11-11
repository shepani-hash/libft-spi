#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t  len_src;
    size_t  len_dst;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize <= len_dst || dstsize == 0)
        return(len_src + dstsize);
	while (*src != '\0' && ft_strlen(dst) < (dstsize - len_dst - 1))
		*dst++ = *src++;
    dst[len_dst] = '\0';
    return(len_src + len_dst);
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