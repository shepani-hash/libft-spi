/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:42:14 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 11:45:55 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	len = start + len;
	subs = malloc (len + 1);
	if (!subs)
		return (NULL);
	while (start < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}
// int main()
// {
//     printf("%s", ft_substr("hello world", 1, 7));
// }
