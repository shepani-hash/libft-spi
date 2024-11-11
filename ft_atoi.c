#include "libft.h"

int ft_atoi(const char  *str)
{
	size_t	i;
	int	sign;
	size_t	r_v;

	i = 0;
	sign = 1;
	r_v = 0;
	while (str[i] <= 32 || str[i] == 127)
			i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r_v = r_v * 10 + (str[i] - 48);
		i++;
	}
	return (r_v * sign);
}
// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	char str[] = "-99999999999"; // handel this case
// 	ft_atoi(str);
// 	char str1[] = "-99999999999"; // handel this case

// 	printf("%d\n",atoi(str1));
// 	printf("%d", ft_atoi(str));// u need understood what happen whit memory
// }