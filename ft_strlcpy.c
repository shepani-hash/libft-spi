#include "libft.h"

size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (dstsize > 0)
    {
        while (src[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = ft_strlen(src);
    return(i);
}

// int main()
// {
//     char dst[6] = "hello";
//     char src[7] = "world";
//     printf("%lu\n%s\n", ft_strlcpy(dst, src, 6), dst);
//     char dst1[6] = "hello";
//     char src1[7] = "world";
//     printf("%lu\n%s\n", strlcpy(dst1, src1, 6), dst1);
// }