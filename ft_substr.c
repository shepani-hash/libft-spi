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

int main()
{
    printf("%s", ft_substr("hello world", 1, 7));
}