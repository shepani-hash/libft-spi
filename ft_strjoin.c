#include "libft.h"

int	ft_strlen(const char	*s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    int i;
    int j;
    char    *str1 = (char   *)s1;
    char    *str2 = (char   *)s2;

    i = 0;
    j = 0;
    new_str = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
    printf("%s", new_str);
    if (!new_str)
        return (NULL);
    while (str1[i])
    {
        new_str[i] = str1[i];
        i++;
    }
    while (str2[j])
        new_str[i++] = str2[j++];
    return (new_str);
}

int main()
{
    char *str1 = "g";
    char *str2 = "";
    printf("%s",ft_strjoin(str1,str2));
}