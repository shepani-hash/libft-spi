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
	while (str[str_len - 1])
	{
		if (c == str[str_len])
			return (&str[str_len]);
		str_len--;
	}
	str = NULL;
	return (str);
}
// int main(void)
// {
//   char buffer1[17] = "coputer program";
//   char * ptr;
//   int    ch = 'o';
//   ptr = ft_strrchr( buffer1, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer1, ptr );
//   char buffer2[17] = "coputer program";
//   char * ptr2;
//   ptr2 = strrchr( buffer2, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",ch, buffer2, ptr2 );
// }
