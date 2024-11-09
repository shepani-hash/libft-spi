#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned  int, char))
{
    char *holder;
    int i;

    i = 0;
    holder  = malloc(ft_strlen(s));
    if (!holder)
        return(NULL);
    while (s[i])
    {
        *holder++ = f(i, s[i]);
        i++;
    }
    return (holder);
}

int main()
{
    char    func(unsigned int   i, char c);
    {
        return (c + i);
    }
    char    str[5] = "hello";
    char *result = ft_strmapi(str, func);
    printf("%s", result); 

}
