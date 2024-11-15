/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:02:59 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 12:14:06 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;
	char			c1;

	c1 = (char)c;//the comparison limited to the range of a `char`.
	i = 0;
	str = NULL;
	while (*s)
	{
		if (*s == c1)
			str = (char *)s;
		s++;
	}
	if (*s == c)
		str = (char *)s;
	return (str);
}
// int main(void)
// {
// 	char arr[] = "bonjr";
// 	char *str1;
// 	str1 = ft_strrchr(arr, 'b');
//         printf("%s\n", str1);
// }
