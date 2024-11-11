#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str = (unsigned char*)s;
    size_t  i;

    i = 0;
    while (str[i] && i < n)
    {
        if (c == str[i])
            return (&str[i]);
        i++;
    }
    str = NULL;
    return (str);
}

// int main(void)
// {
//   char buffer1[17] = "coputer program";
//   char * ptr;
//   int    ch = ' ';
 
//   ptr = ft_memchr( buffer1, ch, 10);
//   printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer1, ptr );
// //   int    ch1 = 'c';
// //   char buffer2[17] = "coputer program";
// //   char * ptr2;
// //   ptr2 = memchr( buffer2, ch1, 5);
// //   printf( "The first occurrence of %c in '%s' is '%s'\n",ch1, buffer2, ptr2 );
// }