/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:49:05 by lhchiban          #+#    #+#             */
/*   Updated: 2024/10/27 15:49:08 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	c1;

	str = (unsigned char *)s;
	i = 0;
	c1 = (unsigned char)c;
	while (str[i] && i < n)
	{
		if (c1 == str[i])
			return (&str[i]);
		i++;
	}
	str = NULL;
	return (str);
}
// int main(void)
// {
//   char buffer1[17] = "coputer program";
//   char * ptr;
//   int    ch = ' ';

//   ptr = ft_memchr( buffer1, ch, 10);
//   printf( "The first occurrence of %c
//in '%s' is '%s'\n",ch, buffer1, ptr );
// //   int    ch1 = 'c';
// //   char buffer2[17] = "coputer program";
// //   char * ptr2;
// //   ptr2 = memchr( buffer2, ch1, 5);
// //   printf( "The first occurrence of %c
//in '%s' is '%s'\n",ch1, buffer2, ptr2 );
// }
