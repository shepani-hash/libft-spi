#include "libft.h"

static  int count_w(const char    *s,char sep)
{
    int c_w;
    int in_sep;

    in_sep = 0;
    c_w = 0;
    while (*s)
    {
        if (*s != sep && in_sep == 0)
        {
            in_sep = 1;
            c_w++;
        }
        else if (*s == sep)
            in_sep = 0;
        s++;
    }
    return (c_w);
}
char    **ft_split(char const *s, char c)//1 arg = the string to be split ,2 arg = the delimiter charater
{
    int i, j;
    int sep_end;
    int w_c;

    w_c = count_w(s, c);
    sep_end = 0;
    i = 0;
    j = 0;
    char    **holder = (char **)malloc((w_c + 1)* sizeof(char *));
    if (!holder)
        return (NULL);
    while (s[i])
    {
        if (s[i] == c)
        {
            if (i > sep_end)
                holder[j++] = ft_substr(s, sep_end,i - sep_end);
            sep_end = i + 1;        
        }
        i++;
    }
    if (i > sep_end)
        holder[j++] = ft_substr(s, sep_end,i - sep_end);
    holder[j] = NULL;
    return (holder);
}
// #include <stdio.h>
// int main()
// {
//     char *str = "hello,y,world,y,are,y,you,y,ok,y";
//     int i = 0;
//     char    **arr = ft_split(str, ',');
//    while (arr[i])
//    {
//         printf("%s\n",arr[i]);
//         i++;
//    }
// }