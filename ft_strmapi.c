/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:14:07 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 20:29:01 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	char	*holder;
	int		i;

	i = 0;
	holder = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!holder)
		return (NULL);
	while (s[i])
	{
		holder[i] = f(i, s[i]);
		i++;
	}
	holder[i] = '\0';
	return (holder);
}

//char func(unsigned int i, char v)
//{
//    return (v - i);
//}
//int main()
//{
//     char *result  = ft_strmapi("hello", func);
//     if (result) {
//         ft_putendl_fd(result, 1);
//         free(result);
//     }
//     printf("%lu", sizeof(unsigned long long));
//     return 0;
//}
