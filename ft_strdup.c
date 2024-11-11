#include "libft.h"

char    *ft_strdup(const char *s1)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(ft_strlen(s1)+1);
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main()
// {
//     char  *str = "hello";
//     printf("%p\n%p", ft_strdup(str), str);
// }