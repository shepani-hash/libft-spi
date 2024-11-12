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
	char	*str;
	int		str_len;

	str = (char *)s;
	str_len = ft_strlen (str);
	if(s[0] == '\0')
		return str;
	while (str_len--)
	{
		if (c == str[str_len])
			return (str+str_len);
		if((char)c == '\0' && str_len == 0)
			return str;
	}
	str = NULL;
	return (str);
}
// int main(void)
// {
// 	char arr[] = "bonjour";
// 	char *str1;
// 	str1 = ft_strrchr(arr, 'b');
//         printf("%s\n", str1);

// }
