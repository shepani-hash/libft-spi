#include "libft.h"
int	ft_strlen(const char	*s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_itoa(int n)
	size_t	i;
	char    *sign;
	size_t	r_v;

	i = 0;
	sign = malloc(ft_strlen(n)*sizeof(int) + 1);
	r_v = 0;
	while (n >= 0 && n <= 9)
	{
		r_v = r_v * 10 + (n - 48);
		i++;
	}
	return (r_v * sign);
}
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int	i = 122; // handel this case
	ft_itoa(str);
	printf("%d", ft_itoa(str));// u need understood what happen whit memory
}