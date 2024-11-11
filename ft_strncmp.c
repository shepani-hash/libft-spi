#include "libft.h"
int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0 )
        return(0);
    while (s1[i] && s2[i] && i < n - 1)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
 
// #define SIZE 10
 
// int main(void)
// {
//   int  result;
//   int  index = 9;
//   char buffer1[SIZE] = "abcfgfg";
//   char buffer2[SIZE] = "abcfgf";
 
//   result = ft_strncmp( buffer1, buffer2, index);
//   printf( "\nComparison of only the first %i characters\n", index );
//   printf( "  strncmp: %d" , result);
 
//   int  result1;
//   int  index1 = 9;
//   char buffer3[SIZE] = "abcfgfg";
//   char buffer4[SIZE] = "abcfgf";
 
//   result1 = strncmp( buffer3, buffer4, index1);
//   printf( "\nComparison of only the first %i characters\n", index1 );
//   printf( "  strncmp: %d", result1 );
// }