/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:45 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 14:31:04 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if(s[0] == '\0')
		return str;
	while (*str)
	{
		if ((char)c == *str)
			return (str);
		str++;
		if((char)c == '\0' && *str == '\0') //why cast
			return str;
	}
	str = NULL;
	return (str);
}
// #include <string.h>
// int main(void)
// {
// 	char str[] = "hhyhyh";
// 	char *str1;
// 	str1 = ft_strchr(str, 'r');
//         printf("%s\n", str1);
// }
