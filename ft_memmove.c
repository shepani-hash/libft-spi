#include "libft.h"

void    *ft_memmove(void * dst, const void * src, size_t len)
{
    size_t i;

    i = 0;
    char *d = (char *)dst;
    char *s = (char *)src;

    while(i < len)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);
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