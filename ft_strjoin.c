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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t total_size;

	i = -1;
	total_size = ft_strlen(s1) + ft_strlen(s2) +1;
	new_str = malloc(sizeof(char)*total_size);
	if (!new_str)
		return (NULL);
	if(total_size == 1)
	{
		new_str[0] = '\0';
		return (new_str);
	}
	while (++i < total_size)
	{
		if(i < ft_strlen(s1))
			new_str[i] = s1[i];
		else
			new_str[i] = *s2++;
	}
	return (new_str);
}
// int main()
// {
//     char *str1 = "ness-ness+";
//     char *str2 = "Btipana ";
//     printf("%s",ft_strjoin(str1, str2));
// }
