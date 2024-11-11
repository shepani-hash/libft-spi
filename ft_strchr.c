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
	while (*str)
	{
		if (c == *str)
			return (str);
		str++;
	}
	str = NULL;
	return (str);
}
// #include <string.h>
// int main(void)
// {
//   char buffer1[17] = "hhello";
//   char * ptr;
//   int    ch = 58;
//   ptr = ft_strchr( buffer1, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer1, ptr );
//   char buffer2[17] = "coputer program";
//   char * ptr2;
//   ptr2 = strchr( buffer2, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer2, ptr2 );
// }
