#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char *str1 = (unsigned char*)s1;
    unsigned char *str2 = (unsigned char*)s2;    

    i = 0;
    if (n == 0 )
        return(0);
    while (str1[i] && str2[i]  && i < n - 1)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}

// int main()
// {
//     char str[6] = "hello";
//     char str1[7] = "hellog";
//     printf("%d",ft_memcmp(str, str1, -5)); // why when i set negative value he is keep compiling
// }