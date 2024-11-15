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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] && (haystack[i + j] == needle[j] && i + j < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (NULL);
}

// int main(void)i u need to undesrstood more and the size t problems
// {
//    char *string1 = "a haystack needle";
//    char *string2 = "haystack";
//    char *result;
//   result = ft_strnstr(string1,string2, -1);
//      /* Result = a pointer to "haystack" */
//   printf("%s\n", result);
// }
