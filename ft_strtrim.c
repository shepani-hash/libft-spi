/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhchiban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:45:01 by lhchiban          #+#    #+#             */
/*   Updated: 2024/11/11 12:02:15 by lhchiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	last_p(const char *s, char c)
{
	int	k;

	k = 0;
	while (s[k])
	{
		if (c == s[k])
			return (1);
		k++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*str1;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (j == 0)
		return (strdup(""));
	while (last_p(set, s1[i]))
		i++;
	while (last_p(set, s1[j - 1]))
		j--;
	str1 = (char *)malloc((j - i + 1) * sizeof(char));
	if (!str1)
		return (NULL);
	else
		str1 = ft_substr(s1, i, j - i);
	return (str1);
}
// int main()
// {
//     char    *s1 = " 		 ";
//     char    *set = " ";
//     printf("%s", ft_strtrim(s1, set));
// }
