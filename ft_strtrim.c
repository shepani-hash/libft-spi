#include "libft.h"

int	ft_strlen(const char	*s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    unsigned int i;

    i = 0;
    len = start + len;
    subs = malloc(len + 1);
	if (!subs)
		return (NULL);
    while(start < len)
        subs[i++] = s[start++];
    subs[i] = '\0';
    return (subs);
}

static int  last_p(const char   *s, char    c)
{
    int k;

    k = 0;
    while (s[k])
    {
        if (c == s[k])
            return (1);
        k++;
    }
    return (0);
}
char    *ft_strtrim(char const  *s1, char const  *set)
{
    char    *str1;
    int i, j;

    i = 0;
    while (last_p(set, s1[i]))
        i++;
    j = ft_strlen(s1);
    while (last_p(set, s1[j-1]))
        j--;
    str1 = malloc(j-i+1);
    if (!str1)
        return (NULL);
    else
        str1 = ft_substr(s1, i,j-i);
    return (str1);
}

int main()
{
    char    *s1 = "hh juhb hh";
    char    *set = "hh";
    printf("%s", ft_strtrim(s1, set));
}
